#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


typedef int * IPTR;

//order of n

bool Search(int Arr[],int iSize,int iNo)
 {
    int iCnt=0,iCount=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
        
                iCount++;
                break;
                
        
        }
    }
        if(iCount>0)
        {
            return true;
        }
        else
        {
            return false;
        }
   

    
 }

int main()
{
    int iLength=0,iCnt=0,iRet=0,iValue=0;
    bool bRet=false;//auto storage class
    IPTR iptr=NULL;

    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);

    //Step 1: allocate the memory

    iptr=(IPTR)malloc(iLength*sizeof(int));

    if(NULL==iptr)//jr memory nhi milali tr
    {
        printf("unable to allocate meomry :");
        return -1;

    }

    printf("Enter the values: \n");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&iptr[iCnt]);
    }

    printf("Enter the number to Search:\n");
    scanf("%d",&iValue);


    //step 2:use the memory
    iRet=Search(iptr,iLength,iValue);

    if(bRet==true)
    {
        printf("%d is present in the data\n",iValue);
    }
    else
    {
        printf("%d is notpresent in the data\n",iValue);
    }
    printf("Frequency of %d: %d",iValue,bRet);



    //step 3: free the memory
    free(iptr);




    return 0;
}
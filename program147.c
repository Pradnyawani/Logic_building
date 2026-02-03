#include<stdio.h>
#include<stdlib.h>



typedef int * IPTR;

int Minimum(int Arr[],int iSize)
{
    int iCnt=0,iMin=0; 
        

    for(iMin=Arr[iCnt],iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
    }
    return iMin;
}


 

int main()
{
    int iLength=0,iCnt=0,iRet=0;
   
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

   


    //step 2:use the memory
    iRet=Minimum(iptr,iLength);
    printf("Minimium number is: %d",iRet);

   
    



    //step 3: free the memory
    free(iptr);




    return 0;
}
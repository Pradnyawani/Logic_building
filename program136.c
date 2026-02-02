#include<stdio.h>
#include<stdlib.h>


typedef int * IPTR;

 int FrequencyCalculate(int Arr[],int iSize,int iNo)
 {
    int iCnt=0,iCount=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
        

        iCount++;
        }
    }

    
 }

int main()
{
    int iLength=0,iCnt=0,iRet=0,iValue=0;//auto storage class
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

    printf("Enter the number to calculate frequency:\n");
    scanf("%d",&iValue);


    //step 2:use the memory
    iRet=FrequencyCalculate(iptr,iLength,iValue);
    printf("Frequency of %d: %d",iValue,iRet);



    //step 3: free the memory
    free(iptr);




    return 0;
}
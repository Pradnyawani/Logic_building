#include<stdio.h>
#include<stdlib.h>



typedef int * IPTR;

void ReverseDisplay(int Arr[],int iSize)
{
    int iCnt=0;
    for(iCnt=iSize-1;iCnt>=0;iCnt--) //reverse
    {
        printf("%d\n",&Arr[iCnt]);
    }
}


 

int main()
{
    int iLength=0,iCnt=0;
   
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
    ReverseDisplay(iptr,iLength);

   
   

   
    



    //step 3: free the memory
    free(iptr);




    return 0;
}
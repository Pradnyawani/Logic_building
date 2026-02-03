#include<stdio.h>
#include<stdlib.h>



typedef int * IPTR;

void update(int Arr[],int iSize)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        Arr[iCnt]++;
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
    update(iptr,iLength);

    printf("updated data from array is:");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("%d\n",iptr[iCnt]);
    }
   

   
    



    //step 3: free the memory
    free(iptr);




    return 0;
}
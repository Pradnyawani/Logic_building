//dynamic memory
#include<stdio.h>
#include<stdlib.h>          //for malloc and free

int Summation(int Arr[],int iSize)                    //pointer
{
     int iCnt=0,iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++) 
    {
        iSum=iSum+Arr[iCnt];
       
    
    }
    return iSum;

}

int main()
{
    int iLength=0,iCnt=0,iRet=0;
    int *ptr=NULL; //intialize the pointer with value null

    printf("Enter number of elements:");
    scanf("%d",&iLength);

    ptr=(int *)malloc(iLength*sizeof(int)); //typecaste 
    if(NULL==ptr) //industrial way of coding
    {
        printf("Unable to locate meomry\n");
        return -1;
    }

    printf("Enter the elements:");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    iRet=Summation(ptr,iLength);

    printf("Addition is %d\n",iRet);

    free(ptr); //to free the memory 
    
    
   
    return 0;
}
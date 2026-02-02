//dynamic memory
#include<stdio.h>
#include<stdlib.h>          //for malloc and free

float Average(int Arr[],int iSize)                    //pointer
{
     int iCnt=0,iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++) 
    {
       iSum=iSum+Arr[iCnt];

       
    
    }
    return ((float)iSum/(float)iSize);
   

}

int main()
{
    int iLength=0,iCnt=0;
    float fRet=0;
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
    fRet=Average(ptr,iLength);

    printf("Avereage is is %f\n",fRet);

    free(ptr); //to free the memory 
    
    
   
    return 0;
}
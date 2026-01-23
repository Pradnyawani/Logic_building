//dynamic memory
#include<stdio.h>
#include<stdlib.h>          //for malloc and free

void Display(int Arr[],int iSize)                    //pointer
{
     int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++) 
    {
        
        printf("%d\n",Arr[iCnt]);
    
    }

}

int main()
{
    int iLength=0,iCnt=0;
    int *ptr=NULL; //intialize the pointer with value null

    printf("Enter number of elements:");
    scanf("%d",&iLength);

    ptr=(int *)malloc(iLength*sizeof(int)); //typecaste 
    if(ptr=NULL) //major issue due to one =
    {
        printf("Unable to locate meomry\n");
        return -1;
    }

    printf("Enter the elements:");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    Display(ptr,iLength);

    free(ptr); //to free the memory 
    
    
   
    return 0;
}
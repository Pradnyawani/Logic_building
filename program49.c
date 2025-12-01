//factors 
#include<stdio.h>

 
 
void DisplayFactors(int iNo)
{
    int iCnt=0;

    if(iNo < 0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
       if((iNo % iCnt)!=0) //its not factors of the input
       {
        printf("%d\n",iCnt);       
        }
    }
    
    
} 

 //time complexity:o(N)
   
int main()
{
    int iValue=0;
    

    printf("enter number: \n");
    scanf("%d",&iValue);

   DisplayFactors(iValue); 
   

   return 0;
}


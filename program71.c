#include<stdio.h>
//itration

int SumDigits(int iNo)
{

    
    int iSum=0, iDigit=0;
  
   c:\Users\Shubham\Desktop\LB\program70.c

while(iNo!=0)
      {
        iDigit=iNo %10;
       iNo=iNo/10;
       iSum = iSum + iDigit;
        
       }
          

   return iSum; 
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

   iRet= SumDigits(iValue);

   printf("sum of digits are: %d\n",iRet);
   
return 0;
}
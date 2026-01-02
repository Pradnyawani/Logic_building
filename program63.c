#include<stdio.h>


int main()
{
    int iNo=723614;
    int iDigit=0;
    printf("original value od iNo is : %d\n",iNo);

    printf("__________________________________\n");
    iDigit=iNo % 10;
    printf(" iDidit is : %d\n",iDigit);
    iNo=iNo/10;
    printf("iNo is : %d\n",iNo);

    printf("__________________________________\n");
    iDigit=iNo % 10;
    printf("iDidit is : %d\n",iDigit);
    iNo=iNo/10;
    printf("iNo is: %d\n",iNo);

    printf("__________________________________\n");
    iDigit=iNo % 10;
    printf("iDidit is :%d\n",iDigit);
   iNo=iNo/10;
    printf("iNo is : %d\n",iNo);

    printf("__________________________________\n");
    iDigit=iNo % 10;
    printf("iDidit is :%d\n",iDigit);
    iNo=iNo/10;
    printf("iNo is :%d\n",iNo);
    
return 0;
}
#include<stdio.h>
// code to demosnstarate the need of itration

int main()
{
    int iNo=723614;
    int iDigit=0;
    printf("original value of iNo is : %d\n",iNo);

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

     printf("__________________________________\n");
    iDigit=iNo % 10;
    printf("iDidit is :%d\n",iDigit);
    iNo=iNo/10;
    printf("iNo is :%d\n",iNo);

     printf("__________________________________\n");
    iDigit=iNo % 10;
    printf("iDidit is :%d\n",iDigit);
    iNo=iNo/10;
    printf("iNo is :%d\n",iNo);


  printf("__________________________________\n");
    
return 0;
}
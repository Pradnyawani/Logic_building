//write a c program to display each digit of a given number in reverse order
#include<stdio.h>


int main()
{
    int iNo=7236;
    int iDigit=0;

    iDigit=iNo % 10;
    printf("%d\n",iDigit);
    iNo=iNo/10;

    iDigit=iNo % 10;
    printf("%d\n",iDigit);
    iNo=iNo/10;

    iDigit=iNo % 10;
    printf("%d\n",iDigit);
    iNo=iNo/10;

    iDigit=iNo % 10;
    printf("%d\n",iDigit);
    iNo=iNo/10;
    
return 0;
}
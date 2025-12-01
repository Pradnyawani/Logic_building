//input :12 2 output:true
//input :12  4 output:false
#include<stdio.h>

    
   
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("enter first number:\n");
    scanf("%d",&iValue1);

    printf("enter Second number:\n");
    scanf("%d",&iValue2);

    if ((iValue1 % iValue2 )== 0)
    {
        printf("it is completely divisiable" );
    }
    else
    {
        printf("it is  not  completely divisiable" );
    }


   return 0;
}


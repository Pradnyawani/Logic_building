#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{


    return ((iNo%2)==0);
   
}
int main()
{
    int ivalue=0;
    bool bRet=false;

    printf("Enter number:\n");
    scanf("%d",&ivalue);

    bRet=CheckEvenOdd(ivalue);

    if(bRet==true)
    {
        printf("%d is even number\n",ivalue);
    }
    else
    {
        printf("%d is odd number\n",ivalue);   
    }

    return 0;
}
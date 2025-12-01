//input :12 2 output:true
//input :12  4 output:false
#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo1,int iNo2)
{
    if((iNo1 % iNo2)==0)
    {
        return true;
        }
        else 
        {
            return false;
        }
}

    
   
int main()
{
    int iValue1=0,iValue2=0;
    bool bRet = false;

    printf("enter first number:\n");
    scanf("%d",&iValue1);

    printf("enter Second number:\n");
    scanf("%d",&iValue2);

    bRet=CheckDivisible(iValue1,iValue2);

    if (bRet == true)
    {
        printf("it is completely devisiable\n" );
    }
    else
    {
        printf("it is  not  completely devisiable\n" );
    }


   return 0;
}


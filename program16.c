////////////////////////////////////////////////////////////////////////////////////////////
//
//Requried Header file 
//
////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>                                                         //for input output
#include<stdbool.h>                                                       //for bool datatype


////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   CheckEvenOdd
// Description:     Its is used to check number even or odd
// Input:           Integer
// output:          Boolean
// Author:          Pradnya Bhausaheb Wani
// Date:            10/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)                                       
{
    int iRem=0;

    iRem = iNo%2; 
    if(iRem==0)
    {  return true; }
    else
    {  return false; }
}

////////////////////////////////////////////////////////////////////////////////////////////
//
// Entry point Function
//
////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int ivalue=0;
    bool bRet=false;

    printf("Enter number:\n");
    scanf("%d",&ivalue);

    bRet=CheckEvenOdd(ivalue);

    if(bRet==true)
    {   printf("%d is even number\n",ivalue); }
    else
    { printf("%d is odd number\n",ivalue);    }

    return 0;
}


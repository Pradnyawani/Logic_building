

/*
ALOGORITHM

START
    Accept first number as no1
    Accept second number as no2
    perform addirion of no1 & no2
    If the input is negative then convert it into positive
    Display the addition on screen
STOP
*/


//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Requried Header file
//
//////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :  AdditionTwoNumber
//  Description :      It is used to perform addition
//  Input   :          Float,Float
//  Output:            Float
//  Author:            Pradnya Bhausaheb Wani
//  Date:              09/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(
                           float fNo1,                                                   //First input
                           float fNo2                                                    //Second input 
                           )
{
    float fSum=0.0f;                                                                     //To store the Result

    if(fNo1<0.0f)                                                                        //updator      
    {
        fNo1 =-fNo1;
    }

    
    if(fNo2<0.0f)                                                                        //updator
    {
        fNo2 =-fNo2;
    }

    fSum=fNo1+fNo2;                                                                      //Business logic
    return fSum;
}   //End of AdditionTwoNumbers

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1=0.0f,fValue2=0.0f;                                                    //To accept use input
    float fRet=0.0f;                                                                    //TO store the result

    printf("Enter first number:\n");
    scanf("%f",&fValue1);

    printf("Enter second number:\n");
    scanf("%f",&fValue2);

    fRet =AdditionTwoNumbers(fValue1,fValue2);                                          //Method call

    printf("Addition is :%f\n",fRet);    

    return 0;
}   //End of main

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handled by the application 
//  Input1 :  10.5        Input2 : 3.2    output : 13.7
//  Input1 :  -10.5       Input2 : 3.2    output : 13.7
//  Input1 :  10.5        Input2 : -3.2   output : 13.7  
//  Input1 :  -10.5       Input2 : -3.2   output : 13.7
//  Input1 :  10.5        Input2 : 0.0    output : 13.7
//
//////////////////////////////////////////////////////////////////////////////////////////////////////


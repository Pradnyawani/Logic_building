//important change  //static memory
#include<stdio.h>

void Display(int Arr[],int iSize)                    //pointer
{
     int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++) 
    {
        
        printf("%d\n",Arr[iCnt]);
    
    }

}

int main()
{
    int Brr[]={10,20,30,40};  
   Display(Brr,4); //display(100,4) //100-call by values,4-call vy address
    return 0;
}
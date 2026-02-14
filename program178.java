/* 
input:8
output:z x y 
Index:1 2 3 4 5 6 7 8
ASCII:65 66  67 68 69
    


  
*/ 


import java.util.Scanner;
class Pattern
{
    public void Display(int iNo)
    {
        int iCnt=0;
       
        char ch='Z';
        for(iCnt=1;iCnt<=iNo;iCnt++,ch--)
        {
           System.out.printf("%c\t",ch);
            
        }
        System.out.println();

    }
}

class program178
{
    public static void main(String A[])
    {
        Scanner sobj=new Scanner(System.in);

        int iValue=0;

       
        System.out.println("enter the Frequency:");
        iValue=sobj.nextInt();

        

        Pattern pobj=new Pattern();
        pobj.Display(iValue);

    }
}
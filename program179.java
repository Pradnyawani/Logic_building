/* iRow:4
   iCol:4

   
   a b c d  e
   f g k l m
    


  
*/ 


import java.util.Scanner;
class Pattern
{
    public void Display(int iRow,int iCol)
    {
        //logic
        int i=0,j=0;
        char ch='a';

        for(i=1;i<=iRow;i++)
        {
            for(j=1;j<=iCol;j++)
            {
                System.out.printf("%c\t",ch);
                ch++;   //to reset important
                
                
                
            }
            System.out.println();
        }
        

    }
}

class program179
{
    public static void main(String A[])
    {
        Scanner sobj=new Scanner(System.in);

        int iValue1=0,iValue2=0;

       
        System.out.println("enter the number of rows:");
        iValue1=sobj.nextInt();

        System.out.println("enter the number of columns:");
        iValue2=sobj.nextInt();

        Pattern pobj=new Pattern();
        pobj.Display(iValue1,iValue2);

    }
}
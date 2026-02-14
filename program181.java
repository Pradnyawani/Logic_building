/* iRow:4
   iCol:4

   
   a b c d  
   a b c d
   a b c d

    


  
*/ 


import java.util.Scanner;
class Pattern
{
    public void Display(int iRow,int iCol)
    {
        //logic
        int i=0,j=0;
        char ch='\0';

        for(i=1;i<=iRow;i++)
        
        {
                  //reset
            for(j=1,ch='a';j<=iCol;j++,ch++)
            {
                System.out.printf("%c\t",ch);
                
                
                
                
            }
            System.out.println();
        }
        

    }
}

class program181
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
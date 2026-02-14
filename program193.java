/* iRow:6
   iCol:6
* * * *
*  $ *    *
*     *
* * * *
  Diagonal   


  
*/ 


import java.util.Scanner;
class Pattern
{
    //filter for square matrix
    public void Display(int iRow,int iCol)
    {
        //logic
        int i=0,j=0;
        if(iRow!=iCol)
        {
            System.out.println("Tnvalid input");
             System.out.println("row number and column number should be same");
             return;

        }

        for(i=1;i<=iRow;i++)
        
        {
                 
            for(j=1;j<=iCol;j++)
            {
                if(i==j)
                {
                    System.out.print("%\t"); //exception
                }
                else if(i>j)
                {
                    System.out.print("#\t");
                }
                else{
                    System.out.print("$\t")
                }
                
                
                
                
            }
            System.out.println();
        }
        

    }
}

class program192
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
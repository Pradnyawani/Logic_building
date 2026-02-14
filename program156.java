//Input :5
//output:5 4 3 2 1 
import java.util.*;
class Pattern
{
    public void Display(int iNo)
    {
        
        int icnt=0;
        for(icnt=iNo;icnt>=1;icnt--)
        {
       
            System.out.print(icnt+"\t");     
        
        }
        System.out.println(); 
    }
}

class program156
{
  public static void main(String A[])
      {
        Scanner sobj=new Scanner(System.in);
        int iValue=0;

        System.out.println("enter the frequency:");
        iValue=sobj.nextInt();
        Pattern pobj=new Pattern();
        pobj.Display(iValue);

      }
}
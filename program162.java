//Input :6
//output:1 * 2 * 3 *
import java.util.*;
class Pattern
{
    public void Display(int iNo)
    {
        
        int icnt=0;
        int iCount=0;

        iCount=1;
        for(icnt=1;icnt<=iNo;icnt++)
        {
            if(icnt%2==0)
            {
                 System.out.print("*\t");
            }
            else{
                 System.out.print(iCount+"\t");
                 iCount++;
            }
            
       
                
        
        }
       
        System.out.println(); 
    }
}

class program162
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
//2n
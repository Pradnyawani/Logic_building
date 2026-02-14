//Input :6
//output:1 * 2 * 3 *
import java.util.*;
class Pattern
{
    public void Display(int iNo)
    {
        
        int icnt=0;
       

        for(icnt=1;icnt<=iNo;icnt++)
        {
            if(icnt%2==0)
            {
                 System.out.print("*\t");
            }
            else{
                 System.out.print(((icnt/2)+1)+"\t");
                 
            }
            
       
                
        
        }
       
        System.out.println(); 
    }
}

class program163
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
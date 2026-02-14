//Input :5
//output:-5 -4 -3 -2 -1 0 1 2 3 4 5 
import java.util.*;
class Pattern
{
    public void Display(int iNo)
    {
        
        int icnt=0;
        for(icnt=-iNo;icnt<=0;icnt++)
        {
       
            System.out.print(icnt+"\t");     
        
        }
        for(icnt=1;icnt<=iNo;icnt++)
        {
             System.out.print(icnt+"\t");  
        }
        System.out.println(); 
    }
}

class program160
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
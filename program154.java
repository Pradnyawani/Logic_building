//Input :5
//output:1 * 3 * 5*
import java.util.*;
class Pattern
{
    public void Display(int iNo)
    {
        
        int icnt=0;
        for(icnt=1;icnt<=iNo;icnt++)
        {
        if((icnt%2)==0)
        {
            System.out.print("*\t");
        }
        else
        {
            System.out.print(icnt+"\t");  //\t is used for the soace like * * * * *
        }
        System.out.println(); 
    }
}
}
class program154
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
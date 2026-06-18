//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q4. Wrtie a program to find the minimum of three numbers.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    public void findMin(int iNo1 , int iNo2, int iNo3)
    {
      if(iNo1<iNo2 && iNo1<iNo3)
      {
        System.out.println(iNo1 +" is minimum"); 
      }
      else if(iNo2<iNo3)
      {
        System.out.println(iNo2 +" is minimum");
      }
      else
      {
        System.out.println(iNo3 +" is minimum");
      }
      
    }
}
class AS17_Q4_MinimumOfThreeNum
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findMin(3,7,2);
    
    }
}



/*

Output :
2 is minimum

*/

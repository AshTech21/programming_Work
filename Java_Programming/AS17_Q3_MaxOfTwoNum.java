//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q3. Wrtie a program to find the maximum of two numbers.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    public void findMax(int iNo1 , int iNo2)
    {
        if(iNo1 > iNo2)
        {
            System.out.println(iNo1 +" is maximum");
        }
        else if(iNo1 == iNo2)
        {
            System.out.println("Both numbers are equal");
        }
        else
        {
            System.out.println(iNo2 +" is maximum");
        }
    }
}
class AS17_Q3_MaxOfTwoNum 
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findMax(20,15);
    
    }
}



/*

Output :
20 is maximum

*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q1. Write a program and print sum of all evne numbers upto N.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    public void calculateSumOfEvenNumbers(int iNo)
    {
        int iSum = 0;
        for(int i = 2; i <= iNo; i += 2)
        {
            iSum += i;
        }
        System.out.println("Sum of even numbers upto " + iNo + " is: " + iSum);
    }
}
class AS20_Q1_SumEvenNumberUptoN
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.calculateSumOfEvenNumbers(10);
    }
}

/*

output :

Sum of even numbers upto 10 is: 30


*/
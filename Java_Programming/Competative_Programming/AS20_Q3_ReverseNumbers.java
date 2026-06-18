//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q3. Write a program and print reverse numbers from N to 1.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    public void printReverseNumbers(int iNo)
    {
        System.out.println("Reverse numbers from " + iNo + " to 1 are:");
        for(int i = iNo; i >= 1; i--)
        {
            System.out.print(i + "\t");
        }
        System.out.println();
    }
}
class AS20_Q3_ReverseNumbers
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printReverseNumbers(10);
    }
}

/*

output :

Reverse numbers from 10 to 1 are:
10	9	8	7	6	5	4	32	1


*/
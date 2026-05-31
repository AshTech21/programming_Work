//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q4. Write a program which accept number from user and print all odd numbers up to that number.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void OddDisplay(int iNo)
{
   
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo ;iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t",iCnt);
        }
    }
    printf("\n");

}
int main()
{
    int iValue= 0;
    printf("Enter a Number: ");
    scanf("%d",&iValue);   
    OddDisplay(iValue);
    return 0;
}


/*

output:
Enter a Number: 18
1	3	5	7	9	11	13	15	17

*/
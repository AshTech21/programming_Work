//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q5. Write a program which accepts two numbers from user and display its digits in reverse order.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void DisplayDigits(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter a Number : ");
    scanf("%d", &iValue);
    DisplayDigits(iValue);
    return 0;
}

/*

output:
Enter a Number : 751
1
5
7

*/
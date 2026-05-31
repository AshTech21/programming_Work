//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q1. Write a program which accept number from user and display pattern as shown below.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo ;iCnt++)
    {
        printf("$\t");
        printf("*\t");
    }
    printf("\n");

}
int main()
{
    int iValue= 0;
    printf("Enter a Number: ");
    scanf("%d",&iValue);   
    Pattern(iValue);
    return 0;
}


/*

output:
Enter a Number: 5
$	*	$	*	$	*	$	*$	*
*/
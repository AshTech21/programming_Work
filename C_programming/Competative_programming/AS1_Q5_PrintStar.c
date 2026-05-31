////////////////////////////////////////////////////////////////////////////////////////////
//Q5.Accept a number from user and print that number of * on screen.
////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Accept(int iNo)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        printf("*\n");
    }
}

int main()
{
    int iValue=0;

    printf("Enter a Number: ");
    scanf("%d",&iValue);
    Accept(iValue);
    return 0;
}


/*
output:
Enter a Number: 10
*
*
*
*
*
*
*
*
*
*

*/
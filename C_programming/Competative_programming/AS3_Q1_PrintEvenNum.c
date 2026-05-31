////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q1. Write a program which accept number from user and print that number of even numbers on Screen.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void printEven(int iNo)
{
    int iCnt=1;

    if(iNo<=0)
    {
        return;
    }
    for(iCnt = 1 ; iCnt<=iNo ; iCnt++)
    {
        printf("%d \t",iCnt*2);
    }

    
    printf("\n");
    
}
int main()
{
    int iValue = 0;
    printf("Enter a Number :");
    scanf("%d",&iValue);
    printEven(iValue);
    return 0;
}


/*
output:

Enter a Number :7
2 	4 	6 	8 	10 	12 	14 
*/
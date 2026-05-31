////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q2. Write a program which accept number from user and display all its factors in reverse order.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void FactRev(int iNo)
{
    int iCnt =0;

    for (iCnt = iNo/2; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
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
    FactRev(iValue);
    return 0;
}


/*

output:

Enter a Number: 10
5       2       1

*/
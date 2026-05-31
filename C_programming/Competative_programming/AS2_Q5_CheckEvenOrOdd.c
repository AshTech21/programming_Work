////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q5 Accept number from user check whether it is even or odd.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;
    printf("Enter a Number:");
    scanf("%d",&iValue);
    bRet = ChkEven(iValue);
    if(bRet==TRUE)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }   

    return 0;
}


/*

output:
Enter a Number:10
The number is even.

*/
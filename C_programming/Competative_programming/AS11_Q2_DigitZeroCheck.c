//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q5. Write a program which accepts two numbers from user and display its digits in reverse order.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
typedef int BOOL;
# define TRUE 1
# define FALSE 0


BOOL CheckZero(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;
       
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a Number : ");
    scanf("%d", &iValue);
    bRet = CheckZero(iValue);
    if(bRet == TRUE)
    {
        printf("Number contains Zero\n");
    }
    else
    {
        printf("Number does not contain Zero\n");
    }
    return 0;
}

/*

output:

1) Enter a Number : 7051
   Number contains Zero

2) Enter a Number : 2342  
   Number does not contain Zero

*/
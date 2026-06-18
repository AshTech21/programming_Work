/* 
    ALGORITHM

    START
        Accept number as no
        if number is completely divisble by 2 
            then print even
        otherwise
            print odd
    STOP

    START
        Accept number as no
        divide no by 2
        If remainder is 0
            then print even
        otherwise
            print odd
    STOP
*/

#include<stdio.h>

int main()
{
    int iValue = 0;
    int iRemainder = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRemainder = iValue % 2;

    if(iRemainder == 0)
    {
        printf("Number is Even \n");
    }
    else
    {
        printf("Number is Odd \n");
    }
    
    return 0;
}
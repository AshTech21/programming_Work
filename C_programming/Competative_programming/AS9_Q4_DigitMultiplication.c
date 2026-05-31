//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q4. Write a program which accepts number from user and print multiplication of all digits in that number.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int MulDigits(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    int iMul= 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo!=0)
    {
        iDigit = iNo % 10;
        iMul = iMul * iDigit;
        iNo = iNo /10 ;
    }
    return iMul;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number :");
    scanf("%d",&iValue);
    iRet = MulDigits(iValue);
    printf("Multiplication of digits is : %d\n",iRet);
    return 0;

}

/*

output:

Enter a Number :751
Multiplication of digits is : 35


*/

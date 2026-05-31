//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q5.Write a program which accepts number from user and count frequency of digits under 6 in that number.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int Count(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo!=0)
    {
        iDigit = iNo % 10;
        if(iDigit<6)
        {
            iCount++;
        }
        iNo = iNo /10 ;
    }
    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number :");
    scanf("%d",&iValue);
    iRet = Count(iValue);
    printf("Count of digits under 6 in the number is : %d\n",iRet);
    return 0;

}

/*

output:
    
1) Enter a Number :2345
   Count of digits under 6 in the number is : 4

2) Enter a Number :789
   Count of digits under 6 in the number is : 0
*/

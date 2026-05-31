//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q4.Write a program which accepts number from user and count frequency of digit 4 in that number.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int CountFour(int iNo)
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
        if(iDigit == 4)
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
    iRet = CountFour(iValue);
    printf("Count of digit 4 in the number is : %d\n",iRet);
    return 0;

}

/*

output:
    
Enter a Number :24442
Count of digit 4 in the number is : 3

*/

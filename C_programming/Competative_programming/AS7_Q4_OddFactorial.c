//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q4. Write a program which accept number from user and print Odd factorial of that number.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
int OddFactorial (int iNo)
{
  int iCnt = 0;
  int iFact = 1;

  if(iNo < 0)
  {
    iNo = -iNo;
  }
  for(iCnt = iNo ; iCnt>=1 ; iCnt--)
  {
    if(iCnt %2 != 0)
    {
      iFact = iFact * iCnt;
    }
  }
  return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number: ");
    scanf("%d", &iValue);
    iRet = OddFactorial(iValue);
    printf("Odd Factorial of %d is %d\n", iValue, iRet);
    return 0;
}

/*

output:

Enter a Number: 5
Even Factorial of 5 is 8


*/
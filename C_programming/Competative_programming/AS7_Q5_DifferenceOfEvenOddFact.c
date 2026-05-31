//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q5. Write a program which accept number from user and print difference between Even factorial and Odd factorial of that number.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
int FactorialDiff(int iNo)
{
  int iCnt = 0;
  
  int iEvenFact = 1;
  int iOddFact = 1;

  if(iNo < 0)
  {
    iNo = -iNo;
  }

  for(iCnt = iNo ; iCnt>=1 ; iCnt--)
  {
    if(iCnt %2 == 0)
    {
      iEvenFact = iEvenFact * iCnt;
    }
    else
    {
      iOddFact = iOddFact * iCnt;
    }
  }
  return iEvenFact - iOddFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number: ");
    scanf("%d", &iValue);
    iRet = FactorialDiff(iValue);
    printf("Differnece between Even and Odd Factorial of %d is %d\n", iValue, iRet);
    return 0;
}

/*

output:

Enter a Number: 5
Differnece between Even and Odd Factorial of 5 is -7


*/
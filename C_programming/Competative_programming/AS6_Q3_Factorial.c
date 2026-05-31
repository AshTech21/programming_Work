//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q3. Write a program which accept number from user and print factorial of that number.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
int Factorial (int iNo)
{
  int iCnt = 0;
  int iFact = 1;
  for(iCnt = iNo ; iCnt>=1 ; iCnt--)
  {
    iFact = iFact * iCnt;
  }
  return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number: ");
    scanf("%d", &iValue);
    iRet = Factorial(iValue);
    printf("Factorial of %d is %d\n", iValue, iRet);
    return 0;
}

/*

output:

Enter a Number: 5
Factorial of 5 is 120


*/
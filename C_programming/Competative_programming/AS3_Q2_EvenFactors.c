////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q2. Write a program which accept number from user and print even factors of that number.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void DisplayFactor(int iNo)
{
  int iCnt = 0;
  if(iNo <= 0)
  {
    iNo = -iNo;
  }
  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {
    if(iCnt %2 ==0 && iNo% iCnt == 0) 
    {
      printf("%d \t",iCnt);
    }
  }
  printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter a Number :");
    scanf("%d",&iValue);
    DisplayFactor(iValue);
    return 0;
}

/*

output:

Enter a Number :24
2 	4 	6 	8 	12 	24 

*/


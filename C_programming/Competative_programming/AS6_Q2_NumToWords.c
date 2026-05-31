//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q2. Write a program which accept number from user and print that number in words.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
void Display(int iNo)
{
  if(iNo == 1)
  {
    printf("One \n");
  }
  else if(iNo == 2)
  {
    printf("Two \n");
  }
  else if(iNo == 3)
  {
    printf("Three \n");
  }
  else if(iNo == 4)
  {
    printf("Four \n");
  }
  else if(iNo == 5)
  {
    printf("Five \n");
  }
  else if(iNo == 6)
  {
    printf("Six \n");
  }
  else if(iNo == 7)
  {
    printf("Seven \n");
  }
  else if(iNo == 8)
  {
    printf("Eight \n");
  }
  else if(iNo == 9)
  {
    printf("Nine \n");
  }
  else
  {
    printf("Invalid Number \n");
  }
}
int main()
{
    int iValue = 0;
    printf("Enter a Number: ");
    scanf("%d", &iValue);
    Display(iValue);
    return 0;
}

/*

output:
Enter a Number: 3
Three 

Enter a Number: 7
Seven 

Enter a Number: 12
Invalid Number 

*/
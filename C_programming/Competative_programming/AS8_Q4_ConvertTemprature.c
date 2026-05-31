//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q4.Write a program which accepts temperature in Fahrenheit from user and convert it into Celsius.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
double FhtoCs(float fTemp)
{
  return (fTemp - 32) * 5/9;
}
int main()
{
  float fValue = 0.0f;
  double dRet = 0.0;
  printf("Enter Temprature in Fahrenheit: ");
  scanf("%f",&fValue);
  dRet = FhtoCs(fValue);
  printf("Temprature in Celsius is : %lf c\n",dRet);
  return 0;
}

/*

output:

Enter Temprature in Fahrenheit: 10  
Temprature in Celsius is : -12.222222 c

*/
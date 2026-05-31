//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q2.Write a program which accept width and height of rectangle from user and calculate its area.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
double RectArea(float fWidth , float fHight)
{
  return fWidth * fHight;
}
int main()
{
  float fValue1 = 0.0f , fValue2 = 0.0f;
  double dRet = 0.0;
  printf("Enter Width: ");
  scanf("%f",&fValue1);
  printf("Enter Height: ");
  scanf("%f",&fValue2);
  
  dRet = RectArea(fValue1,fValue2);
  printf("Area of Rectangle is : %lf\n",dRet);
  return 0;
}

/*

output:

Enter Width: 2.3
Enter Height: 9.78
Area of Rectangle is : 22.493999

*/
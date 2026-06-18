
#include<stdio.h>

float AddTwoNumbers(
                        float fno1,         //First input
                        float fno2          //Second input
                   )
{
    float fAns = 0.0f;                      //Variable to store result
    fAns = fno1 + fno2;                     //Perfrom addition
    return fAns;                           
}

int main()
{
    float fValue1 = 0.0f;                   //To store First input
    float fValue2 = 0.0f;                   //To store second input
    float fResult = 0.0f;                   //To store result

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter second number : \n");
    scanf("%f",&fValue2);

    fResult = AddTwoNumbers(fValue1 , fValue2);

    printf("Addition is : %f\n",fResult);


    return 0;
}
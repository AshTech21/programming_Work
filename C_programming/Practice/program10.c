////////////////////////////////////////////////////////
//
//  Include Required Header Files
//
////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////
//
//  Function Name:  AddTwoNumbers
//  Input        :  float , float
//  Output       :  float
//  Description  :  Performs Addition of two floats
//  Date         :  08/05/2026   
//  Author       :  AshwinKumar Suhas Kulkarni          
//
////////////////////////////////////////////////////////

float AddTwoNumbers(
                        float fno1,         //First input
                        float fno2          //Second input
                   )
{
    float fAns = 0.0f;                      //Variable to store result
    fAns = fno1 + fno2;                     //Perfrom addition
    return fAns;                           
}

////////////////////////////////////////////////////////
//
//  Application to perform Addition of two float values
//
////////////////////////////////////////////////////////
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

////////////////////////////////////////////////////////
//
//  Input  :   10.0    11.0
//  Output :  21.0
//
////////////////////////////////////////////////////////
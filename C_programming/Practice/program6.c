/*  
    ALGORITHM

    START 
        Accept frist number as no1
        Accept second number as no2
        ADD both the numbers
        Display the result
    STOP
*/


#include<stdio.h>

int main()
{
    //Variable creation with default values
    float i = 0.0f ,j = 0.0f ,k = 0.0f;

    printf("Enter first number : \n");
    scanf("%f",&i);

    printf("Enter second number : \n");
    scanf("%f",&j);

    k = i + j;

    printf("Addition is : %f\n",k);


    return 0;
}
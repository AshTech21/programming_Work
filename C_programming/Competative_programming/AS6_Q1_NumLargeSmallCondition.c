//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q1. Write a program which accept number from user and if number is less then 50 then print "Small", if it is greater than 50 and less than 100 
//     then print "Medium" and if it is greater than 100 then print "Large".
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
void Number(int iNo)
{
    if(iNo<50)
    {
        printf("Small \n");
    }
    else if(iNo>50 && iNo<100)
    {
        printf("Medium \n");
    }
    else
    {
        printf("Large \n");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a Number: ");
    scanf("%d", &iValue);
    Number(iValue);
    return 0;
}

/*

output:
Enter a Number: 45
Small 

Enter a Number: 77
Medium 

Enter a Number: 110
Large 

*/
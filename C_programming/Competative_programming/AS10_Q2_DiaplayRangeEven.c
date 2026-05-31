//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q2. Write a program which accepts two numbers from user and display all even numbers in between them.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void RangeDisplayEven(int iStart ,int iEnd)
{
    int iCnt = 0;
    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
        return;
    }
    
    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
        printf("%d\t",iCnt);
        }
    }
    printf("\n");
}
int main()
{
    int iValue1 =0 , iValue2 = 0;
    printf("Enter Starting Point: ");
    scanf("%d",&iValue1);
    printf("Enter Ending Point: ");
    scanf("%d",&iValue2);
    RangeDisplayEven(iValue1,iValue2);
    
    return 0; 
}

/*
output:

Enter Starting Point: 10
Enter Ending Point: 20
10	12	14	16	18	20

*/
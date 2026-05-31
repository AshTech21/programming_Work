//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q1. Write a program which accepts two numbers from user and display all numbers in between them.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void RangeDisplay(int iStart ,int iEnd)
{
    int iCnt = 0;
    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
        return;
    }
    
    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        printf("%d\t",iCnt);
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
    RangeDisplay(iValue1,iValue2);
    
    return 0; 
}

/*
output:

Enter Starting Point: 10
Enter Ending Point: 20
10	11	12	13	14	15	16	17	18	19	20

Enter Starting Point: 50
Enter Ending Point: 10
Invalid Range

Enter Ending Point: 5
-5	-4	-3	-2	-1	0	1	2  3  4  5	

*/
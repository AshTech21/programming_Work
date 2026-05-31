//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q4. Write a program which accepts two numbers from user and display sum of all even numbers in between them.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
int RangeSumEven(int iStart ,int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {

        if((iStart > iEnd) || (iStart <0))
        {
            printf("Invalid Range\n");
            break;
        }
    
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }

    }
    return iSum;

}
int main()
{
    int iValue1 =0 , iValue2 = 0, iRet = 0;
    printf("Enter Starting Point: ");
    scanf("%d",&iValue1);
    printf("Enter Ending Point: ");
    scanf("%d",&iValue2);
    iRet = RangeSumEven(iValue1,iValue2);
    printf("Sum of even numbers in the given range is: %d\n", iRet);
    return 0; 
}

/*
output:

Enter Starting Point: 23
Enter Ending Point: 30
Sum of even numbers in the given range is: 108

Enter Starting Point: -10
Enter Ending Point: 2 
Invalid Range
Sum of even numbers in the given range is: 0


*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q2. Write a proram to print the following Pattern
// 
//  input: 5
//      
//  Output: 5   #   4   #   3   #   2   #   1   #
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt > 0  ; iCnt--)
    {
        printf("%d\t#\t",iCnt);   
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter number of elemenets :");
    scanf("%d",&iValue);
  
    Pattern(iValue);
    return 0;
}


/*

output :

Enter number of elemenets :5
5	#	4	#	3	#	2	#	1   #

*/
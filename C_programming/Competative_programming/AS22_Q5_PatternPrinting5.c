//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q5. Write a program to print the following Pattern
// 
//  input: 5
//      
//  Output: 2	4	6	8	10	12	14	16
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0 , iJump = 0;

    for(iCnt = 1 , iJump = 2; iCnt <=iNo  ; iCnt++)
    {
        printf("%d\t",iJump);
        iJump+=2 ;
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

Enter number of elemenets :8
2	4	6	8	10	12	14	16


*/
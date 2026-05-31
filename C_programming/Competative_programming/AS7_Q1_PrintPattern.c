//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q3. Write a program which accept number from user and print the pattern.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo)
{
    if(iNo <0)
    {
        iNo = -iNo ;
    }
   
    int iCnt = 0;

    for(iCnt = -(iNo); iCnt <= iNo ;iCnt++)
    {
        if(iCnt < 0)
        {
            printf("*\t",iCnt);
        }
        else if(iCnt == 0)
        {
            printf(" ",iCnt);
        }
        else
        {
            printf("#\t",iCnt);
        }
    }
    printf("\n");

}
int main()
{
    int iValue= 0;
    printf("Enter a Number: ");
    scanf("%d",&iValue);   
    Display(iValue);
    return 0;
}


/*

output:
Enter a Number: 3
*	*	*	 #	 #	 #

Time Complexity : O(2N)

*/

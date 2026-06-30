//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q3. Write a program to print the following Pattern
// ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 
    input: iRow = 5  iCol = 5     
    
    Output: 
        *	*	*	*	*	
        *	 	 	*	*	
        *	 	*	 	*	
        *	*	 	 	*	
        *	*	*	*	*	
              
    
*/

#include<stdio.h>

void Pattern(int iRow , int iCol)
{   
    int i = 0 , j =0;

    for(i = 1 ; i<= iRow ; i++)
    {
        for(j = iCol; j >=  1 ; j--)
        {
           if(i == 1 || i == iRow || j == iCol || j == 1 || i == j)
           {    
                printf("*\t");
           }
           else if( j > i )
           {
                printf("#\t");
           }
           else
           {
                printf("$\t");
           }
        }
        printf("\n");
    }

}
int main()
{
    int iValue1 = 0  ,iValue2 = 0;

    printf("Enter Number of Rows :");
    scanf("%d",&iValue1);


    printf("Enter Number of Coloumns :");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}


/*
output :

Enter Number of Rows :5
Enter Number of Coloumns :5
*	*	*	*	*	
*	 	 	*	*	
*	 	*	 	*	
*	*	 	 	*	
*	*	*	*	*	


*/
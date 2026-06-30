//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q4. Write a program to print the following Pattern
// ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 
    input: iRow = 3  iCol = 4     
    
    Output: 
            *	#	*	#	
            *	#	*	#	
            *	#	*	#       
    
*/

#include<stdio.h>
void Pattern(int iRow , int iCol)
{
   int i = 0 , j = 0;

   for(i = 1 ; i <= iRow ; i++)
   {
        for(j = 1 ; j<=iCol ; j++)
        {
            if(j % 2 == 0)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
            
        }
        printf("\n");
   }
}
int main()
{
    int iValue1 = 0, iValue2 =0;
    printf("Enter number of Rows :");
    scanf("%d",&iValue1);

    printf("Enter number of Coloumns :");
    scanf("%d",&iValue2);
  
    Pattern(iValue1, iValue2);
    return 0;
}


/*

Enter number of Rows :3
Enter number of Coloumns :4
*	#	*	#	
*	#	*	#	
*	#	*	#


*/
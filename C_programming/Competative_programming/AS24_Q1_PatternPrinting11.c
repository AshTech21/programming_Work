//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q1. Write a program to print the following Pattern
// ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 
    input: iRow = 4  iCol = 4     
    
    Output: 
        A	B	C	D	
        A	B	C	D	
        A	B	C	D	
        A	B	C	D
              
    
*/

#include<stdio.h>
void Pattern(int iRow , int iCol)
{
   int i = 0 , j = 0;
   char ch = '\0';

   for(i = 1 ; i <= iRow ; i++)
   {
        for(j = 1 ,ch = 'A'; j<=iCol ; j++ , ch++)
        {
            printf("%c\t",ch);
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

Enter number of Rows :4
Enter number of Coloumns :4
A	B	C	D	
A	B	C	D	
A	B	C	D	
A	B	C	D


*/
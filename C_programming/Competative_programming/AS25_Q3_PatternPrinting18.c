//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q3. Write a program to print the following Pattern
// ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 
    input: iRow = 4  iCol = 5     
    
    Output: 
        a	b	c	d	e	
        1	2	3	4	5	
        a	b	c	d	e	
        1	2	3	4	5	
        a	b	c	d	e
              
    
*/

#include<stdio.h>

void Pattern(int iRow ,int iCol)
{
 int i = 0 ,j = 0 ,iNum = 0 ;
 char ch = '\0';

 for( i = 1 ; i <= iRow ; i++)
 {
    for(j = 1 , iNum = 1 , ch = 'a'; j <= iCol ; j++, iNum++, ch++)
    {
        if(i %2 == 0)
        {
            printf("%d\t",iNum);
        }
        else
        {
            printf("%c\t",ch);
        }
       
    }
     printf("\n");
 }


}
int main()
{
    int iValue1 = 0 , iValue2 = 0 ;

    printf("Enter Number of Rows :");
    scanf("%d",&iValue1);


    printf("Enter Number of Coloumns :");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}


/*

Enter Number of Rows :5
Enter Number of Coloumns :5
a	b	c	d	e	
1	2	3	4	5	
a	b	c	d	e	
1	2	3	4	5	
a	b	c	d	e

*/
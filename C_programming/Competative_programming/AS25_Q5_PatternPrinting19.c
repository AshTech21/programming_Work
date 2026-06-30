//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q3. Write a program to print the following Pattern
// ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 
    input: iRow = 4  iCol = 4     
    
    Output: 
        1	2	3	4	
        2	3	4	5	
        3	4	5	6	
        4	5	6	7
              
    
*/

#include<stdio.h>

void Pattern(int iRow ,int iCol)
{
 int i = 0 ,j = 0  ,iTemp = 0;


 for( i = 1 ; i <= iRow ; i++)
 {
    for(j = 1; j <= iCol ; j++)
    {
        if(i == 1)
        {
             printf("%d\t",j);    
        }
        else
        {
            iTemp = ((i - 1)+j);
            printf("%d\t",iTemp);
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
output :

Enter Number of Rows :4
Enter Number of Coloumns :4
1	2	3	4	
2	3	4	5	
3	4	5	6	
4	5	6	7


*/
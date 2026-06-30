//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q2. Write a program to print the following Pattern
// ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 
    input: iRow = 4  iCol = 5     
    
    Output: 
        2	4	6	8	
        1	3	5	7	
        2	4	6	8	
        1	3	5	7
              
    
*/

#include<stdio.h>

void Pattern(int iRow ,int iCol)
{
    int i = 0, j = 0;
    int iEven = 0 , iOdd = 0;
    for(i = 1 ;i <= iRow ; i++)
    {
        for(j = 1 ,iEven = 2 , iOdd =1 ; j <=iCol ; j++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",iOdd);
                iOdd+=2;
            }
            else
            {
                printf("%d\t",iEven);
                iEven+=2;
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

Enter Number of Rows :4
Enter Number of Coloumns :4
2	4	6	8	
1	3	5	7	
2	4	6	8	
1	3	5	7


*/
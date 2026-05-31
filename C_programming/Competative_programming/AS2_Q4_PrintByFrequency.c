////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q4 Accept two numbers from user and display first number in secod number of times. 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Display(int iNo,int ifrequency)
{
    int iCnt=0;
    for(iCnt=0;iCnt<ifrequency;iCnt++)
    {
        printf("%d \n",iNo);
    }
}
int main()
{
    int iValue=0 , iCount=0;
    printf("Enter a Number : ");
    scanf("%d",&iValue);

    printf("Enter a Frequency : ");
    scanf("%d",&iCount);
    Display(iValue,iCount);
    return 0;
}

/*

output:
Enter a Number : 10
Enter a Frequency : 5
10 
10 
10 
10 
10 

*/
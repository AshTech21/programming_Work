//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q1.Accept N numbers from user and take one number from user and check weather that number is present or not.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int Arr[], int iLenght,int iNo)
{
    int iCnt = 0;

    for(iCnt=0 ; iCnt<iLenght ;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == iLenght)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    int iSize =0, iCnt=0 ,iValue = 0;
    BOOL bRet = FALSE;

    int *p = NULL;


    printf("Enter number of Elements :");
    scanf("%d",&iSize);

    p = (int *)malloc(sizeof(int)*iSize);   //by using malloc the memory is allocated

    if(p==NULL)
    {
        printf("unable to allocate the memory....\n");
        return -1;
    }

    printf("Enter %d elements : \n",iSize);
    for(iCnt=0 ; iCnt< iSize ; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    
    printf("Enter a number you want to check it is present or not : ");
    scanf("%d",&iValue);

    bRet = Check(p,iSize,iValue);
    if(bRet == TRUE)
    {
        printf("%d is present \n",iValue);
    }
    else
    {
        printf("%d is not present \n",iValue);
    }
    free(p);

    return 0;
}

/*

output:

Enter number of Elements :5
Enter 5 elements : 
10
20
30
40
50
Enter a number you want to check it is present or not : 30
30 is present 

*/

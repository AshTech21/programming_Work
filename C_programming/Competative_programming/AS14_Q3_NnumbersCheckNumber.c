//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q3.Accept N numbers from user and check weather that nummber contains 11 in it or not.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int Arr[], int iLenght)
{
    int iCnt = 0;

    for(iCnt=0 ; iCnt<iLenght ;iCnt++)
    {
        if(Arr[iCnt] == 11)
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
    int iSize =0, iCnt=0;
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

    bRet = Check(p,iSize);
    if(bRet == TRUE)
    {
        printf("11 is present in the array \n");
    }
    else
    {
        printf("11 is not present in the array \n");
    }
    free(p);

    return 0;
}

/*

output:
    
Enter number of Elements :7
Enter 7 elements : 
85
66
3
80
93
88
90 
Difference between the freqeuncy of the count of Even and Odd elements: 1 

*/

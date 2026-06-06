//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q3.Accept N numbers from user and return the difference between largest and smallest number among them.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[], int iLenght)
{
    int iCnt = 0 ,iMax = Arr[0] , iMin = Arr[0];

    for(iCnt=0 ; iCnt<iLenght ;iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        else 
        {
            if(Arr[iCnt] < iMin)
            {
                iMin = Arr[iCnt];
            }
        }
    }
    return iMax - iMin;
}

int main()
{
    int iSize =0, iCnt=0 , iRet = 0;
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

    iRet = Difference(p,iSize);
    printf("Difference between Largest and Smallest Number is : %d \n",iRet);

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
Difference between Largest and Smallest Number is : 40

*/

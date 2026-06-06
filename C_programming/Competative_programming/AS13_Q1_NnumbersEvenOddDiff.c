//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q1.Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[], int iLenght)
{
    int iCnt = 0 , iSum = 0, iOdd = 0;

    for(iCnt=0 ; iCnt<iLenght ;iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
            iSum = iSum + Arr[iCnt];
        }
        else
        {
            iOdd = iOdd + Arr[iCnt];
        }
    }
    return (iSum - iOdd);

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
    printf("Result is : %d \n",iRet);

    free(p);

    return 0;
}

/*

output:
    
Enter number of Elements :6
Enter 6 elements : 
85
66
3
80
93
88
Result is : 53 

*/

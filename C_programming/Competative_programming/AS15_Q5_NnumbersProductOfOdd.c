//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q5.Accept N numbers from user return product of all odd elements.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
int Product(int Arr[], int iLenght)
{
    int iCnt = 0 ,iProduct =1;

    for(iCnt=0 ; iCnt<iLenght ;iCnt++)
    {
        if(Arr[iCnt]%2 != 0)
        {
            iProduct = iProduct * Arr[iCnt];
        }
    }
    return iProduct;
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

    iRet = Product(p,iSize);
    printf("Result is : %d \n",iRet);

    free(p);

    return 0;
}

/*

output:
    
Enter number of Elements :5
Enter 5 elements : 
15
66
3
70
10     
Result is : 45 

*/

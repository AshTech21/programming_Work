//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q5.Accept N numbers from user and Display the summation of digitis of that numbers.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
#include<stdio.h>
#include<stdlib.h>
void DigitSum(int Arr[], int iLenght)
{
    int iCnt = 0 ,iDigit = 0 , iSum = 0, iCount2 = 0;

    for(iCnt=0 ; iCnt<iLenght ;iCnt++)
    {
        for(iCount2=0 ; Arr[iCnt] != 0 ; iCount2++)
        {
            iDigit = Arr[iCnt] % 10;
            iSum = iSum + iDigit;
            Arr[iCnt]= Arr[iCnt] / 10;
        }
        printf("%d\t",iSum);
        iSum = 0;
    }
    printf("\n");
}

int main()
{
    int iSize =0, iCnt=0;
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
    
    DigitSum(p,iSize);

    free(p);

    return 0;
}

/*

output:
    
Enter number of Elements :5
Enter 5 elements : 
8225
665
444
555
666
17	17	12	15	18

*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q2.Accept N numbers from user and return difference between frequency of even elements and odd elements in it.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[], int iLenght)
{
    int iCnt = 0 , iCountEven = 0 , iCountOdd = 0;

    for(iCnt=0 ; iCnt<iLenght ;iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;
        }
    }
    return (iCountEven - iCountOdd);
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

    iRet = Frequency(p,iSize);
    printf("Difference between the freqeuncy of the count of Even and Odd elements: %d \n",iRet);

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

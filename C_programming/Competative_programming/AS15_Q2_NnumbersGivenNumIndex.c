//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q2.Accept N numbers from user and take one number from user and return the index of first occurence of that NO
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLenght,int iNo)
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
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int iSize =0, iCnt=0 ,iValue = 0;
    int iRet = 0;

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
    
    printf("Enter a number you want to check its first occurrence : ");
    scanf("%d",&iValue);

    iRet = FirstOcc(p,iSize,iValue);
    if(iRet == -1)
    {
        printf("%d is not present in the array \n",iValue);
    }
    else
    {
        printf("The index of %d first occurrence is : %d \n",iValue,iRet);
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
Enter a number you want to check its first occurrence : 40
The index of 40 first occurrence is : 3


Enter number of Elements :4
Enter 4 elements : 
10
20
30
40
Enter a number you want to check its first occurrence : 50
50 is not present in the array 

*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q3.Accept N numbers from user and take one number from user and return the index of last occurence of that NO
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLenght,int iNo)
{
    int iCnt = 0, iIndex = 0;

    for(iCnt=0 ; iCnt<iLenght ;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iIndex = iCnt;    
        }
    }
    if(iIndex == 0)
    {
        return -1;
    }
    else
    {
        return iIndex;
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
    
    printf("Enter a number you want to check its last occurrence : ");
    scanf("%d",&iValue);

    iRet = LastOcc(p,iSize,iValue);
    if(iRet == -1)
    {
        printf("%d is not present in the array \n",iValue);
    }
    else
    {
        printf("The index of %d last occurrence is : %d \n",iValue,iRet);
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
30
50
Enter a number you want to check its last occurrence : 30     
The index of 30 last occurrence is : 3 


*/

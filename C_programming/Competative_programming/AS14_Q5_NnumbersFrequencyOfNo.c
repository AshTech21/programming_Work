//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q5.Accept N numbers from user and accept another number from user and return frequency of that number from it.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLenght, int iNo)
{
    int iCnt = 0, iCount=0;;

    for(iCnt=0 ; iCnt<iLenght ;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize =0, iCnt=0, iRet = 0, iValue = 0;
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

    printf("Enter a number to check its frequency :");
    scanf("%d",&iValue);

    iRet = Frequency(p,iSize, iValue);
    
    printf("Frequncy of %d in the array is : %d \n",iValue,iRet);
    free(p);

    return 0;
}

/*

output:
    
Enter number of Elements :5
Enter 5 elements : 
20
25
25
30
22
Enter a number to check its frequency :25
Frequncy of 25 in the array is : 2 

Enter number of Elements :3
Enter 3 elements : 
20
25
30
Enter a number to check its frequency :10
Frequncy of 10 in the array is : 0 s
*/

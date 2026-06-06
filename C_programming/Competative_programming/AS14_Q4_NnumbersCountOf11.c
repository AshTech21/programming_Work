//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q4.Accept N numbers from user and return frequency of 11 from it.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLenght)
{
    int iCnt = 0, iCount=0;;

    for(iCnt=0 ; iCnt<iLenght ;iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize =0, iCnt=0;
    int iRet = 0;
    int *p = NULL;


    printf("Enter number of Elements :");
    scanf("%d",&iSize);

    p = (int *)malloc(sizeof(int)*iSize);   //by using malloc te memory is allocated

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
    
    printf("Frequncy of 11 in the array is : %d \n",iRet);
    free(p);

    return 0;
}

/*

output:
    
Enter number of Elements :6
Enter 6 elements : 
85
66
15
3
88
93
Frequncy of 11 in the array is : 0 

Enter number of Elements :3
Enter 3 elements : 
22
33
11
Frequncy of 11 in the array is : 1 

*/

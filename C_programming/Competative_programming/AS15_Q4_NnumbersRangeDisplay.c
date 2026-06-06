//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q4.Accept N numbers from user and Display all elements from that array which are in between range taken from user.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[], int iLenght ,int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt=0 ; iCnt<iLenght ;iCnt++)
    {
       if(Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
       {
            printf("%d\t",Arr[iCnt]);
       }
    }
    printf("\n");
    

}

int main()
{
    int iSize =0, iCnt=0 , iStart =0, iEnd = 0;
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

    printf("Enter the starting point of range : ");
    scanf("%d",&iStart);

    printf("Enter the ending point of range : ");
    scanf("%d",&iEnd);

    Display(p,iSize,iStart,iEnd);

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
Enter the starting point of range : 20
Enter the ending point of range : 40
20	30	40
 
*/

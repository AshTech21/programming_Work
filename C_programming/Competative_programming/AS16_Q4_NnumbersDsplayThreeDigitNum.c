//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q4.Accept N numbers from user and Display all elements which have 3 digits in it.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
void Digits(int Arr[], int iLenght)
{
    int iCnt = 0;

    for(iCnt=0 ; iCnt<iLenght ;iCnt++)
    {
       if(Arr[iCnt]>=100 && Arr[iCnt]<=999)
       {
            printf("%d\t",Arr[iCnt]);
       }
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

    printf("The Elements which have 3 digits \n");
    Digits(p,iSize);

    free(p);

    return 0;
}

/*

output:
    
Enter number of Elements :5
Enter 5 elements : 
20
300
400
500 
7000
The Elements which have 3 digits 
300	400	500	
*/

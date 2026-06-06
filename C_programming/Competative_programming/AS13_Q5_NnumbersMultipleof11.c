//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q5.Accept N numbers from user and Display all such elements which are a multiple of 11
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[], int iLenght)
{
    int iCnt = 0;

    for(iCnt=0 ; iCnt<iLenght ;iCnt++)
    {
       if(Arr[iCnt]% 11 == 0)
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

    printf("The Elements which are a multiple of 11 \n");
    Display(p,iSize);

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
The Elements which are a multiple of 11 
66	88

*/

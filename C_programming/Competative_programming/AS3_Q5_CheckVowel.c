////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q5. Write a program which accept character from user and check whether it is vowel or not.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue)
{
    if(cValue =='a' || cValue =='e' || cValue == 'i' || cValue == 'o' || cValue == 'u'
    || cValue =='A' || cValue =='E' || cValue == 'I' || cValue == 'O' || cValue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue  = '\0';
    BOOL bRet = FALSE;
    printf("Enter a Character : ");
    scanf("%c",&cValue);
    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Vowel \n");
    }
    else
    {
        printf("It is not a Vowel \n");
    }
    return 0;
}


/*
output:

Enter a Character : A
It is a Vowel 

Enter a Character : D
It is not a Vowel

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q4. Accept one character from user and convert case of character. (Upper case to lower case and lower case to upper case)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<ctype.h>
char DisplayConvert(char cValue)
{
    if(islower(cValue))
    {
        printf("%c \n", toupper(cValue));
    }
    else 
    {
        printf("%c \n", tolower(cValue));
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter a Character :");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}


/*

output:
Enter a Character :a            
A 

Enter a Character :B
b 

*/
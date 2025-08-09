///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Author      :   Akshay Patil
// File name   :   program4.c
// Description :   Accept a character from the user and check whether it is small letter (a–z) or not.
// Date        :   22-07-25
//
// Input       :   Character : g
// Output      :   TRUE
//
// Input       :   Character : D
// Output      :   FALSE
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

# define TRUE 1 
# define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if (ch >='a' && ch <= 'z')
    {
        return TRUE ;
    }
    
    return FALSE ;

}

int main ()
{
    char cValue = '\0';

    printf("Enter the Character");

    scanf("%c",&cValue);

    BOOL bRet = FALSE ;

    bRet = ChkSmall(cValue);

    if (bRet == TRUE)
    {
        printf("It is small Letter");
    }
    else 
    {
        printf("It is not small Letter");
    }

    return 0;
}

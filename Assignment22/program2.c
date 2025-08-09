///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Author      :   Akshay Patil
// File name   :   program2.c
// Description :   Accept a character from the user and check whether it is capital (A–Z) or not.
// Date        :   22-07-25
// Input       :   Character : F
// Output      :   TRUE
//
// Input       :   Character : d
// Output      :   FALSE
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

# define TRUE 1 
# define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if (ch >='A' && ch <= 'Z')
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

    bRet = ChkCapital(cValue);

    if (bRet == TRUE)
    {
        printf("It is capital Letter");
    }
    else 
    {
        printf("It is not capital Letter");
    }

    return 0;
}
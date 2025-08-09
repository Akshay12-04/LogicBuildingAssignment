///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Author      :   Akshay Patil
// File name   :   program1.c
// Description :   Accept a character from the user and check whether it is an alphabet (A–Z or a–z) or not.
// Date        :   22-07-25
// Input       :   Character : F
// Output      :   TRUE
//
// Input       :   Character : &
// Output      :   FALSE
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if ((ch >='A' && ch <= 'Z') || (ch >='a' && ch <= 'z'))
    {
        return TRUE;
    }
    
    return FALSE;
}

int main()
{
    char ch = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character");
    scanf("%c",&ch);

    bRet = ChkAlpha(ch);

    if (bRet == TRUE)
    {
        printf("It is a Char");
    }
    else 
    {
        printf("It is not a char");
    }

    return 0;
}
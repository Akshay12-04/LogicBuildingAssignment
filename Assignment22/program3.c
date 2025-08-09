///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Author      :   Akshay Patil
// File name   :   program3.c
// Description :   Accept a character from the user and check whether it is digit (0–9) or not.
// Date        :   22-07-25
//
// Input       :   Character : 7
// Output      :   TRUE
//
// Input       :   Character : d
// Output      :   FALSE
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define True 1
#define False 0

typedef int BOOL ;

BOOL ChkDigit(char ch)
{
    if (ch >= '0' && ch <= '9')
    {
        return True;
    }

    return False;
}

int main()
{
    char cValue = '\0';

    printf("Enter the character");

    scanf("%c",&cValue);

    BOOL bRet = False;

    bRet = ChkDigit(cValue);

    if (bRet == True)
    {
        printf("It is Digit ");
    }
    else 
    {
        printf("It is not Digit ");
    }

    return 0;
}

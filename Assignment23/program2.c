///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Author      :   Akshay Patil
// File name   :   program2.c
// Description :   Toggle the case of an entered character, otherwise display as it is.
// Date        :   21-09-25
//
// Input  : Q      → Output : q
// Input  : m      → Output : M
// Input  : 4      → Output : 4
// Input  : %      → Output : %
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void Display(char ch)
{
     if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        printf("%c",ch);
    }

    else if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("%c",ch);
    }
    else
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}

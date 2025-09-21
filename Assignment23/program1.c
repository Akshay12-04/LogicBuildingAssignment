///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Author      :   Akshay Patil
// File name   :   program1.c
// Description :   Display ASCII table from 0 to 255. 
//                 It shows Decimal, Hexadecimal, Octal, and Symbol 
//                 representation of each ASCII value.
// Date        :   21-09-25
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayASCII()
{
    int i;
    printf("---------------------------------------------------------\n");
    printf(" Decimal   Hexadecimal   Octal   Symbol\n");
    printf("---------------------------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        if(i < 32 || i == 127)   // Non-printable characters
            printf(" %d        0x%X         %o     Non-Printable\n", i, i, i);
        else
            printf(" %d        0x%X         %o     %c\n", i, i, i, i);
    }

    printf("---------------------------------------------------------\n");
}

int main()
{
    DisplayASCII();
    return 0;
}

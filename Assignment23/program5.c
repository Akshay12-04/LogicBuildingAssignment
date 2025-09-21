///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Author      :   Akshay Patil
// File name   :   program5.c
// Description :   Accept character from user and display its ASCII value in 
//                 decimal, octal and hexadecimal format.
// Date        :   21-09-25
//
// Input  : A
// Output : Decimal     65
//          Octal       0101
//          Hexadecimal 0X41
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////




#include <stdio.h>

void  Display (char ch)
{
    printf("Decimal     %d\n",ch);
    printf("octal       %o\n",ch);
    printf("Hexadecimal 0X%X",ch);
    
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}

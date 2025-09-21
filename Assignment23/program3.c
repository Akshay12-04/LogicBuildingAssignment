///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Author      :   Akshay Patil
// File name   :   program3.c
// Description :   Print characters from input to 'Z' if capital,
//                 or in reverse to 'a' if small.
// Date        :   21-09-25
//
// Input  : Q      → Output : Q R S T U V W X Y Z
// Input  : m      → Output : m l k j i h g f e d c b a
// Input  : 8      → Output : (no output)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include <stdio.h>

void Display(char ch)
{
     if(ch >= 'A' && ch <= 'Z')
    {
        while (ch <= 'Z')
        {
            printf("%c\t",ch);
            ch++;
        }
    }

    else if(ch >= 'a' && ch <= 'z')
    {
        while (ch >= 'a')
        {
            printf("%c\t",ch);
            ch--;
        }
    }
    else
    {
        return; 
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

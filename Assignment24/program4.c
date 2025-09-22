///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Author      :   Akshay Patil
// File name   :   program4.c
// Description :   Accept string from user and check whether it contains 
//                 vowels (a, e, i, o, u) in it or not.
// Date        :   21-09-25
//
// Input  : "marvellous"
// Output : TRUE
//
// Input  : "Demo"
// Output : TRUE
//
// Input  : "xyz"
// Output : FALSE
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdbool.h>

bool ChkVowel (char *str)
{
    
    while (*str != '\0')
    {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            return true ;
        }
        
        str++;
    }

    return false ;
}

int main()
{
    char arr  [20];
    bool bRet = 0;

    printf("Eneter String :");
    scanf("%[^'\n']s",arr); 

    bRet = ChkVowel(arr);

    if (bRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}

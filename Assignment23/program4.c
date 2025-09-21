///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Author      :   Akshay Patil
// File name   :   program4.c
// Description :   Accept Character from user and check whether it is special 
//                 symbol or not (!, @, #, $, %, ^, &, *).
// Date        :   21-09-25
//
// Input  : %      → Output : TRUE
// Input  : d      → Output : FALSE
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include <stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    bool bValue = false ;
    
    if (ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*')
    {
        bValue = true ;
    }

    return bValue ;
}

int main()
{
    char cValue = '\0';
    bool bRet = false ;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if (bRet == true)
    {
        printf("it is a special characeter");
    }
    else
    {
        printf("it is not a special character");
    }

    return 0;
}

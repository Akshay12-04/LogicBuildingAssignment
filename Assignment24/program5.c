///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Author      :   Akshay Patil
// File name   :   program5.c
// Description :   Accept string from user and display it in reverse order.
// Date        :   21-09-25
//
// Input  : "MarvellouS"
// Output : "SuollevraM"
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

void ReverseString (char *str)
{
    int iCount = 0;
    int i = 0;
    char *ptr = str;
    
    while (*ptr != '\0')
    {
        iCount ++ ;
        ptr++;
    }
    
    for(i = (iCount -1) ; i >= 0 ;i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");

    
}

int main()
{
    char arr[20];
    bool bRet = 0;

    printf("Eneter String :");
    scanf("%[^'\n']s",arr); 

    ReverseString(arr);

    
    return 0;
}

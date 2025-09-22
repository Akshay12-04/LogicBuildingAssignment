///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Author      :   Akshay Patil
// File name   :   program2.c
// Description :   Accept string from user and count the number of 
//                 small (lowercase) characters in it.
// Date        :   21-09-25
//
// Input  : "Marvellous"
// Output : 9
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include <stdio.h>

int CountSmall(char *str)
{
    int iCount = 0;

    while (*str !='\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            iCount ++;
        }
        str++;

    }

    return iCount;
}

int main()
{
    char arr  [20];
    int iRet = 0;

    printf("Eneter String :");
    scanf("%[^'\n']s",arr); 

    iRet = CountSmall(arr);

    printf("%d",iRet);

    return 0;
}

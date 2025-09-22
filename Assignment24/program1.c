///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Author      :   Akshay Patil
// File name   :   program1.c
// Description :   Accept string from user and count the number of capital 
//                 characters in it.
// Date        :   21-09-25
//
// Input  : "Marvellous Multi OS"
// Output : 4
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int CountCapital(char *str)
{
    int iCount = 0;

    while (*str !='\0')
    {
        if (*str >= 'A' && *str <= 'Z')
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

    iRet = CountCapital(arr);

    printf("%d",iRet);

    return 0;
}

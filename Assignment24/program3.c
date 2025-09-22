///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Author      :   Akshay Patil
// File name   :   program3.c
// Description :   Accept string from user and return the difference between 
//                 frequency of small (lowercase) characters and frequency of 
//                 capital (uppercase) characters.
// Date        :   21-09-25
//
// Input  : "MarvellouS"
// Output : 6  (8 - 2)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Diffrence(char *str)
{
    int iCountCapital = 0;
    int iCountSmall = 0;

    while (*str !='\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            iCountSmall ++;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            iCountCapital++;
        }
        
        str++;

    }

    return iCountSmall - iCountCapital;
}

int main()
{
    char arr  [20];
    int iRet = 0;

    printf("Eneter String :");
    scanf("%[^'\n']s",arr); 

    iRet = Diffrence(arr);

    printf("%d",iRet);

    return 0;
}

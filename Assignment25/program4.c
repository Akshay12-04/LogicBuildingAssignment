#include<stdio.h>

void DisplayDigit(char *str)
{
    char * arr = str ;

    while (*arr != '\0')
    {
        if (*arr >= '0' && *arr <= '9' )
        {
            printf("%c",*arr) ;
        }
        arr++ ;
    }
}

int main()
{
    char Arr[20] ;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);

    return 0;
}
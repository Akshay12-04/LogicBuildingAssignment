#include<stdio.h>
//it will count WhiteSpaces 
int CountWhite(char *str)
{
    int iCount = 0;
    char * arr = str ;

    while (*arr != '\0')
    {
        if (*arr == ' ')
        {
            iCount++;
        }
        arr++ ;
    }
    return iCount ;
}

int main()
{
    char Arr[20] ;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    int iRet = CountWhite(Arr);

    printf("%d",iRet);

    return 0;
}
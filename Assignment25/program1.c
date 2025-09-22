#include<stdio.h>

void strlwrx(char * str)
{
    int iCount = 0;
    char *Arr = str ;

    while (*Arr != '\0')
    {
        iCount ++;
        Arr++ ;
    }

    int i = 0 ;

    for (i=0; i <iCount ; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i]+32 ;
        }
    }

    printf("%s",str);
}

int main()
{
    char Arr [20] ;
    
    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    strlwrx(Arr);

    return 0;
}
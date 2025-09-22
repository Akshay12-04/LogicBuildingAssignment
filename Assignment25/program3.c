#include<stdio.h>

void strtogglex(char *str)
{
    int i = 0 ;
    int iCount = 0;

    char * arr = str ;

    while (*arr != '\0')
    {
        iCount++;
        arr++ ;
    }

    for (i = 0; i < iCount; i++)
    {
        if (str [i] <= 'A' && str [i] >= 'Z')
        {
            str [i] = str [i]+32 ;
        }
        else
        {
            str [i] = str [i] - 32 ;
        }
    }
    printf("%s",str);
    

}

int main()
{
    char Arr[20] ;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    strtogglex(Arr);

    return 0;
}
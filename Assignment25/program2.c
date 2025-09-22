#include<stdio.h>
void struprx(char * str)
{
    char * arr = str ;
    int i = 0;
    int iCount = 0;

    while (* arr != 0 )
    {
        iCount++;
        arr++;
    }

    for (i = 0; i< iCount ; i++)
    {
        if (str[i] <= 'z' && str[i] >= 'a')
        {
            str[i] = str[i]-32 ;
        }
    }
    printf("%s",str);

}

/// djvkdks

int main()
{
    char Arr[20];

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);

    struprx(Arr);

    return 0 ;
}


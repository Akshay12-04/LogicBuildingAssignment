/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program3.c
//Description : Accept on number from user if number is less than 10 then print“Hello” otherwise print “Demo”.
//Author :      Akshay Patil
//Date :        18-05-25
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Display(int iNo)
{
    if (iNo<10)
    {
        printf("Hello");
    }
    else
    {
        printf ("Demo");
    }

}

int main()
{
    int ivalue = 0;

    printf("Enter Number ");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}
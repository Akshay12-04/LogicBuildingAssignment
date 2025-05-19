///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program2.c
//Description : Write a program which accept number from user and print even factors of that number.
//Author :      Akshay Patil
//Date :        18-05-25
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayFactor (int iNo)
{
    int iCnt = 0;

    if (iNo <0)
    {
        iNo = -iNo ;
    }
    
    for (iCnt= 1;iCnt<=iNo/2;iCnt++)
    {
        if (iNo % iCnt == 0 )
        {
            printf("%d\t",iCnt);
        }
    }
}

int main ()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}
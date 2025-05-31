//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program2.c
//Description : Accept single digit number from user and print it into word.
//Author :      Akshay Patil
//Date :        31-05-25
//Input :       9/3/12
//Output :      Nine/Three/Invalid Number
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if (iNo == 9)
    {
        printf("Nine");
    }
    else if (iNo == -3)
    {
        printf("Three");
    }
    else
    {
        printf("Invalid Number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
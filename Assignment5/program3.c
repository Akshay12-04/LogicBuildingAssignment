//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program3.c
//Description : Write a program which accept number from user and print its numbers line.
//Author :      Akshay Patil
//Date :        21-05-25
//Input :       4
//Output :      -4 -3 -2 -1 0 1 2 3 4
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0 ;
    
    for (iCnt = -iNo ; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);

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

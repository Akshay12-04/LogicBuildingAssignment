///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program1X.c
//Description : Write a program which accept one number from user and print that number of even numbers on screen.
//Author :      Akshay Patil
//Date :        18-05-25
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven (int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    
    int iCnt = 0;

    for (iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",2*iCnt);
    }
}

int main ()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}
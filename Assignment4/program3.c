//////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program3.c
//Description : 3.Write a program which accept number from user and display all its non factors.
//Author :      Akshay Patil
//Date :        21-05-25
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt != 0 )
        {
            printf ("%d\t" ,iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}

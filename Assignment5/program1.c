//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program1.c
//Description : 1.Write a program which accept number from user and print that number of $ & * on screen.
//Author :      Akshay Patil
//Date :        21-05-25
//Input :       5
//Output :      $   *   $   *   $   *   $   *   $   *
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0 ;
    
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");

    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}

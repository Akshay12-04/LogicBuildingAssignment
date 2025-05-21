//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program5.c
//Description : Write a program which accept N and print first 5 multiples of N.
//Author :      Akshay Patil
//Date :        21-05-25
//Input :       14
//Output :      4 8 12 16 20
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0 ;
    int iMult = 1;
    
    for (iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        iMult = 4 * iCnt ;
        printf("%d \t ", iMult);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}

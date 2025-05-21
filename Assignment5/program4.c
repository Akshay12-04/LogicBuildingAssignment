//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program4.c
//Description : Write a program which accepts N from user and print all odd numbers up to N.
//Author :      Akshay Patil
//Date :        21-05-25
//Input :       14
//Output :      1 3 5 7 9 11 13
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0 ;
    
    for (iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        if (iCnt %2 !=0)
        {
            printf("%d\t",iCnt);
        }
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

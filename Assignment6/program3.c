//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program3.c
//Description : Write a program to find factorial of given number.
//Author :      Akshay Patil
//Date :        31-05-25
//Input :       5/-5/4
//Output :      120/120/24
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Factorial (int iNo )
{
    int iCnt = 0;
    int iFact = 1;

    if (iNo <0)         
    {
        iNo = -iNo;
    }
    
    for (iCnt = 1; iCnt <=iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Factorial (iValue);

    printf("Factorial of number is %d",iRet);

    return 0;
}
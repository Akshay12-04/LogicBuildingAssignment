//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program1.c
//Description : 1.Write a program which accept number from user and display below pattern.
//Author :      Akshay Patil
//Date :        1-06-25
//Input :       5
//Output :      * * * * * # # # # #
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 0;iCnt <= iNo;iCnt++)
    {
        printf("*\t");
    }
    for (iCnt= 0;iCnt<= iNo;iCnt++)
    {
        printf("#\t");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
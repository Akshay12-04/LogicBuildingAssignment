//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program.c
//Description : Write a program which accept number from user and display its table in reverse order.
//Author :      Akshay Patil
//Date :        31-05-25
//Input :       2
//Output :      20 18 16 14 12 10 8 6 4 2
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iTable = 0;

    if (iNo < 0)
    {
        iNo  = -iNo;
    }
    
    for (iCnt = 10; iCnt >= 1; iCnt--)
    {
        iTable = iCnt * iNo;
        printf("%d\t", iTable);
    }

}

int main()
{
    int iValue = 0 ;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}
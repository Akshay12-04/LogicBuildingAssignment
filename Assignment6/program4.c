//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program4.c
//Description : Write a program which accept number from user and display its table.
//Author :      Akshay Patil
//Date :        31-05-25
//Input :       2
//Output :      2 4 6 8 10 12 14 16 18 20
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
    
    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        iTable = iTable + iNo ;
        printf("%d\t",iTable);
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
///////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program 5.c
//Description : Accept one number from user and print that number of * on screen.
//Date :        12-05-25
//
///////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Accept(int iNo)
{
    int iCnt = 0;
    for( iCnt=1 ; iCnt<=iNo ; iCnt++ )
    {
        printf("* \n");
    }
}
int main()
{
    int iValue = 0;
    iValue = 5;
    Accept(iValue);
    return 0;
}
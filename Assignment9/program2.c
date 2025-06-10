//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program2.c
//Description : Write a program which accept number from user and check whether it contains 0 in it or not.
//Author :      Akshay Patil             
//Date :        10-06-25
//Input :       2395                /1018
//Output :     There is no Zero     /It Contains Zero
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    BOOL bChecker = FALSE;

    while (iNo != 0)
    {  
        iDigit = iNo % 10 ;
        iNo = iNo /10 ;

        if (iDigit == 0)
        {
            bChecker = TRUE ;
        }
    }
    return bChecker;
}

int main ()
{
    int iValue = 0;
    BOOL bRet = FALSE ; 

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf ("It Contains Zero ");
    }
    else 
    {
        printf("There is no zero ");
    }
    return 0;
}

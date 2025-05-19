///////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program2.c
//Description : Accept number from user and check whether number is even or odd.
//Author :      Akshay Patil
//Date :        18-05-25
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if (iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if (bRet == TRUE)
    {
        printf("The Number is Even");
    }
    else 
    {
        printf("The Number is odd");
    }
    return 0;
}
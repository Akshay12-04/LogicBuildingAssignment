//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program2.c
//Description : Write a program which accept number from user and return the count of odd digits.
//Author :      Akshay Patil             
//Date :        10-06-25
//Input :       2395
//Output :      3
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountOdd (int iNo) 
{
    int iDigit = 0;
    int iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo /10;

        if (iDigit % 2 != 0)
        {
            iCount ++;
        }
    }
    return iCount ;

}

int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf ("%d",&iValue);

    iRet = CountOdd(iValue);

    printf ("%d",iRet);
    
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program5.c
//Description : 5.Write a program which accept number from user and return difference between
//              summation of even digits and summation of odd digits.
//Author :      Akshay Patil             
//Date :        10-06-25
//Input :       2395
//Output :      -15         (2 - 17)
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountDiff (int iNo) 
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;
    int iDiff = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo /10;

        if (iDigit % 2 == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit ;
        }
    }

    iDiff = iEvenSum - iOddSum ;

    return iDiff ;

}

int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf ("%d",&iValue);

    iRet = CountDiff(iValue);

    printf ("%d",iRet);
    
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program4.c
//Description : 4.Write a program which accept number from user and return multiplication of all digits.
//Author :      Akshay Patil             
//Date :        10-06-25
//Input :       2395
//Output :      270
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultDigits (int iNo) 
{
    int iDigit = 0;
    int iMult = 1;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo /10;

        if (iDigit != 0)                    // It Will ignore zero
        {
            iMult = iMult * iDigit;
        }
    }
    return iMult ;

}

int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf ("%d",&iValue);

    iRet = MultDigits(iValue);

    printf ("%d",iRet);
    
    return 0;
}

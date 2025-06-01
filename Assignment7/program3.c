//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program3.c
//Description : Write a program to find even factorial of given number.
//Author :      Akshay Patil
//Date :        1-06-25
//Input :       5   -8   10
//Output :      8    8   3840
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int EvenFactorial(int iNo)
{ 
    int iCnt = 0;
    int iFactorial = 1;

    if (iNo < 0)
    {
        iNo = - iNo;
    }

    for (iCnt=1; iCnt<= iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iFactorial = iFactorial * iCnt ;
        }
    }
    return iFactorial ;

}

int main()
{
    int iValue = 0 , iRet = 0 ;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);
    printf ("%d",iRet);

    return 0;
}
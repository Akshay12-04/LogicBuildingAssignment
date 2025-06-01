//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program4.c
//Description : Write a program to find odd factorial of given number.
//Author :      Akshay Patil
//Date :        1-06-25
//Input :       5   -5  10
//Output :      15  15  945
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int OddFactorial(int iNo)
{ 
    int iCnt = 0;
    int iFactorial = 1;

    if (iNo < 0)
    {
        iNo = - iNo;
    }

    for (iCnt=1; iCnt<= iNo; iCnt++)
    {
        if (iCnt % 2 != 0)
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

    iRet = OddFactorial(iValue);
    printf ("%d",iRet);

    return 0;
}
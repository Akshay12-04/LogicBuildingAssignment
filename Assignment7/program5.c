///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program5.c
//Description : Write a program which returns difference between Even factorial and odd factorial of given number.
//Author :      Akshay Patil
//Date :        1-06-25
//Input :       5   -5  10
//Output :      7  7  2895
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int FactorialDiff(int iNo)
{ 
    int iCnt = 0;
    int iSumFactorial = 1;
    int iOddFactorial = 1;
    int iDiff = 0;

    if (iNo < 0)
    {
        iNo = - iNo;
    }

    for (iCnt=1; iCnt<= iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iSumFactorial = iSumFactorial * iCnt ;
        }
        else
        {
            iOddFactorial = iOddFactorial * iCnt;
        }
        
    }
    
    iDiff = iSumFactorial -iOddFactorial;

    return iDiff ;

}

int main()
{
    int iValue = 0 , iRet = 0 ;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    printf ("%d",iRet);

    return 0;
}
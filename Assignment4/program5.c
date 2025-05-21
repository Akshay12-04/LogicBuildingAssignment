///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program5.c
//Description : Write a program which accept number from user and return difference between summation of all its factors and non factors.
//Author :      Akshay Patil
//Date :        21-05-25
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    int iDiff = 0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt == 0 )
        {
            iSum1 = iSum1 + iCnt ;
        }
        else
        {
            iSum2 = iSum2 + iCnt ;
        }            
    }
    printf("%d\n",iSum1);
    printf("%d\n",iSum2);

    iDiff = iSum1- iSum2;

    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf ("%d\t",iRet);

    return 0;
}

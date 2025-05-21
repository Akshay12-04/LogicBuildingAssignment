//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program1.c
//Description : 1.Write a program which accept number from user and display its multiplication of factors.
//Author :      Akshay Patil
//Date :        19-05-25
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultiFact (int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for (iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        if (iNo%iCnt == 0)
        {
            iMult = iMult * iCnt ;    
        }  
    }
    return iMult ;
}


int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);
    printf("%d",iRet);
    return 0;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program2.c
//Description : 2.Write a program which accept number from user and display its factors indecreasing order.
//Author :      Akshay Patil
//Date :        19-05-25
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultiFact (int iNo)
{
    int iCnt = 0;
    
    for (iCnt = iNo ; iCnt >= 1; iCnt--)
    {
        if (iNo%iCnt == 0)
        {
            printf("%d\t",iCnt) ;  
        }  
    }
    return iCnt ;
}


int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    MultiFact(iValue);

    return 0;
}


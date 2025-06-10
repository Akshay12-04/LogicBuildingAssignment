//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program4.c
//Description : 4.Write a program which accept number from user and count frequency of 4 in it.
//Author :      Akshay Patil             
//Date :        10-06-25
//Input :       2395  /9440       
//Output :      0     /2
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Count (int iNo) 
{
    int iDigit = 0;
    int iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo /10;

        if (iDigit == 4)
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

    iRet = Count(iValue);

    printf ("%d",iRet);
    
    return 0;
}

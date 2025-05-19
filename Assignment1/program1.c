///////////////////////////////////////////////////////////////////////////////////////////
//
//
//File name :   program 1.c
//Description : Program to divide two numbers
//Author :      Akshay Patil
//Date :        11-05-25
//
//
///////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;
    if(iNo2 == 0) // Check for division by zero
    {
        return -1;
    }
    iAns = iNo1 / iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2); // Call Divide with the values
    printf("Division is %d", iRet);  // Print the result

    return 0;
}

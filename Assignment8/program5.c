//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program5.c
//Description : Write a program which accept temperature in Fahrenheit and convert it into
//              celsius. (1 celsius = (Fahrenheit -32) * (5/9))
//Author :      Akshay Patil             
//Date :        10-06-25
//Input :       5
//Output :      0.464515
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter (int iValue)
{
    double dMeter = 0;

    dMeter = 0.0929*iValue;

    return dMeter;
}

int main ()
{
    int iValue = 0;
    double dRet = 0;

    printf ("Enter Area in square feet :");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("%lf",dRet);

    return 0;
}
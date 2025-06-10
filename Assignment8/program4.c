//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program4.c
//Description : Write a program which accept temperature in Fahrenheit and convert it into
//              celsius. (1 celsius = (Fahrenheit -32) * (5/9))
//Author :      Akshay Patil             
//Date :        10-06-25
//Input :       10
//Output :      -12.2222
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double FhtoCs (int iTemp)
{
    double dTemp = 0;

    dTemp = (iTemp -32) * (5.0/9.0) ;   // 5 & 9 must be floating values ;

    return dTemp;
}

int main ()
{
    int fValue = 0;
    double dRet = 0;

    printf ("Enter Temperature in Fahrenheit :");
    scanf("%d",&fValue);

    dRet = FhtoCs(fValue);

    printf("%lf",dRet);

    return 0;
}
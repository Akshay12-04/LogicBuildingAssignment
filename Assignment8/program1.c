//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program1.c
//Description : 1.Write a program which accept radius of circle from user and calculate its area.
//              Consider value of PI as 3.14. (Area = PI * Radius * Radius)
//Author :      Akshay Patil              j
//Date :        06-06-25
//Input :       5.3
//Output :      88.2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    double PI = 3.14;

    dArea = PI * fRadius * fRadius;

    return dArea ;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Value");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("%f",dRet);

    return 0;
}
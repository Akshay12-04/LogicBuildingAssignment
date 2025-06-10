//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program2.c
//Description : Write a program which accept width & height of rectangle from user and calculate
//              its area. (Area = Width * Height)
//Author :      Akshay Patil              j
//Date :        06-06-25
//Input :       5.3     9.78
//Output :      88.2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double RectArea(float fWidth ,float fHeight)
{
    float fArea = 0.0;

    fArea = fWidth * fHeight ;

    return fArea ;
}

int main ()
{
    float fValue1 = 0.0; 
    float fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width");
    scanf ("%f",&fValue1);

    printf("Enter lenth");
    scanf ("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf ("%f",dRet);

    return 0;

}
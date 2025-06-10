//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program3.c
//Description : Write a program which accept distance in kilometre and convert it into meter. (1
//              kilometre = 1000 Meter)
//Author :      Akshay Patil             
//Date :        10-06-25
//Input :       5
//Output :      5000
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int KMtoMeter (int iNo)
{
    int iMeter = 0;
    
    iMeter = iNo*1000;

    return iMeter;

}

int main ()
{
    int iValue = 0 ,iRet = 0;

    printf("Enter Distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("%d",iRet);

    return 0;
}
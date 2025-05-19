///////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program4.c
//Description : Accept two numbers from user and display first number in second number of times.
//Author :      Akshay Patil
//Date :        18-05-25
//
///////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo ,int iFrequency)
{
    int iCnt = 0;

    if (iFrequency<0)               //updater
    {
        iFrequency = -iFrequency;
    }

    for (iCnt=1;iCnt<=iFrequency; iCnt++) 
    {
        printf("%d\t",iNo);
    }
}
int main ()
{
    int iValue = 0;
    int iCount = 0;
    
    printf("Enter Number : ");
    scanf("%d",&iValue);
    
    printf("Enter Frequency : ");
    scanf("%d",&iCount);
    
    Display(iValue,iCount);
    
    return 0;
}
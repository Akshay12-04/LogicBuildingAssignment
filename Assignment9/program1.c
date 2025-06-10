//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program1.c
//Description : 1.Write a program which accept number from user and display its digits in reverse order.
//Author :      Akshay Patil             
//Date :        10-06-25
//Input :       2395
//Output :      5
//              9   
//              3       
//              5
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit (int iNo)
{
    int iDigit = 0;

    if (iNo<0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10 ;
        printf ("%d\n",iDigit);
        iNo = iNo /10;
    }

}
int main ()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}

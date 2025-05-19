///////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program1.c
//Description : 1.Accept one number from user and print that number of * on screen.
//Author :      Akshay Patil
//Date :        18-05-25
//
///////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    if (iNo<=0)
    {
        iNo = -iNo;
    }

    while(iCnt <iNo )
    {
        printf("*\n");
        iCnt++;
    }
}

int main() {
    
    int iValue = 0;
    printf("Enter Number");
    scanf("%d",&iValue);
   
    Display(iValue);
    return 0;
}
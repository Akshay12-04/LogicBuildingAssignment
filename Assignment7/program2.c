//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program2.c
//Description : Accept amount in US dollar and return its corresponding value in Indian currency 
//              Consider 1$ as 70 rupees.
//Author :      Akshay Patil
//Date :        1-06-25
//Input :       5
//Output :      * * * * * # # # # #
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int DollerToInr(int iNo)
{
    int iINR = 0;
    
    iINR = iNo * 70 ;

    return iINR ;
}

int main()
{
    int iValue = 0 , iRet = 0 ;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = DollerToInr(iValue);

    printf("The Value in INR is : %d",iRet);

    return 0;
}
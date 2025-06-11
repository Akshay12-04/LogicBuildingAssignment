//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program2.c
//Description : Accept number from user and display below pattern.
//Author :      Akshay Patil             
//Date :        11-06-25
//Input :       8
//Output :      2 4 6 8 10 12 14 16
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void pattern(int iNo)
{
    int icnt = 0;
    
    for (icnt = 1; icnt <= (2 * iNo) ;icnt++)
    {
        if (icnt % 2 == 0)
        {
            printf("%d\t",icnt);
        }
    }

}

int main()
{
    int iValue = 0; 

    printf("enter number ");
    scanf("%d",&iValue);
   
    pattern (iValue);

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program3.c
//Description : Accept number from user and display below pattern.
//Author :      Akshay Patil             
//Date :        11-06-25
//Input :       5
//Output :      1 * 2 * 3 * 4 * 5 *
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void pattern(int iNo)
{
    int icnt = 0;
    

    for (icnt = 1; icnt <= iNo ;icnt++)
    {
        printf("%d\t",icnt);
        printf("*\t");

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
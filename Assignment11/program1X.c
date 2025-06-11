//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program1X.c
//Description : Accept number from user and display below pattern.
//Author :      Akshay Patil             
//Date :        11-06-25
//Input :       5
//Output :      A B C D E
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void pattern(int iNo)
{
    int icnt = 0;
    int ch = 65;

    for (icnt = 1; icnt <= iNo ;icnt++)
    {
        printf("%c\t",ch);
        ch = ch + 1;
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
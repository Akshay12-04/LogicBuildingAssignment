//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program2.c
//Description : Accept number from user and display below pattern.
//Author :      Akshay Patil             
//Date :        11-06-25
//Input :       5
//Output :      5 # 4 # 3 # 2 # 1 #
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void pattern(int iNo)
{
    int icnt = 0;
    

    for (icnt = iNo; icnt > 0 ;icnt--)
    {
        printf("%d\t",icnt);
        printf("#\t");
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
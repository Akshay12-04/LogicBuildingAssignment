//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program5.c
//Description : Accept number of rows and number of columns from user and display below pattern.
//Author :      Akshay Patil             
//Date :        11-06-25
//Input :       iRow = 4        iCol = 4
//Output :      1 1 1 1
//              2 2 2 2
//              3 3 3 3
//              4 4 4 4
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern (int iRow , int iCol)
{
    int iCnt = 0;
    int iCCnt = 0;

    for (iCnt = 1 ; iCnt <= iRow ; iCnt++)
    {
        for (iCCnt = 1; iCCnt <= iCol;iCCnt++)
        {
            printf ("%d\t",iCnt);
        }
        printf("\n");
    }

}

int main ()
{
    int iValue1 = 0 ,iValue2 = 0;

    printf("Enter Number of rows and coloum: ");
    scanf("%d   %d",&iValue1,&iValue2);

    Pattern (iValue1,iValue2);

    return 0;
}
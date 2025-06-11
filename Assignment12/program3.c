//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program3.c
//Description : Accept number of rows and number of columns from user and display below pattern.
//Author :      Akshay Patil             
//Date :        11-06-25
//Input :       iRow = 3        iCol = 5
//Output :      5 4 3 2 1
//              5 4 3 2 1
//              5 4 3 2 1
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern (int iRow , int iCol)
{
    int iCnt = 0;
    int iCCnt = 0;

    for (iCnt = 1 ; iCnt <= iRow ; iCnt++)
    {
        for (iCCnt = iCol; iCCnt >= 1; iCCnt--)
        {
            printf("%d\t",iCCnt);
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
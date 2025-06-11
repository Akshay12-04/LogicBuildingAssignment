//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program1.c
//Description : Accept number of rows and number of columns from user and display below pattern.
//Author :      Akshay Patil             
//Date :        11-06-25
//Input :       iRow = 4         iCol = 3
//Output :     * * *
//             * * *
//             * * *
//             * * *
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern (int iRow , int iCol)
{
    int iCnt = 0;
    int iCCnt = 0;

    for (iCnt = 0 ; iCnt < iRow ; iCnt++)
    {
        for (iCCnt = 0; iCCnt < iCol; iCCnt++)
        {
            printf("*\t");
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
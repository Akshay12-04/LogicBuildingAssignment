//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program5.c
//Description : Accept number of rows and number of columns from user and display below pattern.
//Author :      Akshay Patil             
//Date :        12-06-25
//Input :       iRow = 4        iCol = 4
//Output :      1 2 3 4
//              2 3 4 5
//              3 4 5 6
//              4 5 6 7
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0;

    for (iCnt1 = 0; iCnt1 < iRow; iCnt1++)
    {
        for (iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
        {
            printf("%d\t", iCnt1 + iCnt2);
        }
        printf("\n");
    }
}

int main ()
{
    int iValue1 = 0; 
    int iValue2 = 0;

    printf ("Enter number of rows and columns");
    scanf ("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;

}
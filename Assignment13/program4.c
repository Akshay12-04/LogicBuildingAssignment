//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program4.c
//Description : Accept number of rows and number of columns from user and display below pattern.
//Author :      Akshay Patil             
//Date :        12-06-25
//Input :       iRow = 4         iCol = 5
//Output :      4 4 4 4 4
//              3 3 3 3 3
//              2 2 2 2 2
//              1 1 1 1 1
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern (int iRow , int iCol)
{
    int iCnt1 = 0;
    int iCnt2 = 0;

    for (iCnt1 = iRow ; iCnt1 > 0 ; iCnt1--, iRow-- )
    {
        for (iCnt2 = 1 ; iCnt2 <= iCol; iCnt2++)
        {
            printf ("%d\t",iRow);
        }

        printf ("\n");

    }

}

int main ()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows and columns");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
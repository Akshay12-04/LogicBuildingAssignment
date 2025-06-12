//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program5.c
//Description : Accept number of rows and number of columns from user and display below pattern.
//Author :      Akshay Patil             
//Date :        12-06-25
//Input :       iRow = 3         iCol = 4
//Output :      1   2   3   4
//              5   6   7   8
//              9   10  11  12
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern (int iRow , int iCol)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    int iNo = 1;

    for (iCnt1 = 1; iCnt1 <= iRow; iCnt1++ )
    {
        for (iCnt2 = 1 ; iCnt2 <= iCol; iCnt2++,iNo++)
        {
            printf ("%d\t",iNo);
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
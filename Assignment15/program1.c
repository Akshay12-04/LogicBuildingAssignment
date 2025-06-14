//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program1.c
//Description : Accept number of rows and number of columns from user and display below pattern.
//Author :      Akshay Patil             
//Date :        13-06-25
//Input :       iRow = 4         iCol = 4
//Output :      *   #   #   #
//              *   *   #   #
//              *   *   *   #
//              *   *   *   *
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern (int iRow ,int iCol)
{

    int iCnt1 = 0;
    int iCnt2 = 0;

    if(iRow != iCol)
        {
            printf("Invalid input");
            return;
        }


    for (iCnt1 = 0; iCnt1 < iRow ; iCnt1++)
    {
        for (iCnt2 = 0; iCnt2 < iCol ; iCnt2++)
        {
            if (iCnt1 >= iCnt2 )
            {
                printf("*\t");
            }
            else 
            {
                printf("#\t");
            }
        }
        printf ("\n");
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
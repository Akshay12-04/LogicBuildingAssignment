//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program4.c
//Description : Accept number of rows and number of columns from user and display below pattern.
//Author :      Akshay Patil             
//Date :        14-06-25
//Input :       iRow = 6         iCol = 6
//Output :      1       2       3       4
//                      2       3       4
//                              3       4
//                                      4
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Pattern (int iRow ,int iCol)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    int iNo = 1;

    for (iCnt1 = 1; iCnt1 <= iRow ; iCnt1++)
    {
        for (iCnt2 = 1; iCnt2 <= iCol ; iCnt2++,iNo++)
        {
            if (iCnt1 <= iCnt2)
            {
                printf("%d\t",iNo);
            }
            else 
            {
                printf("\t");
            }
        }
        iNo = 1;
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
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program1.c
//Description : Accept number of rows and number of columns from user and display below pattern.
//Author :      Akshay Patil             
//Date :        12-06-25
//Input :       iRow = 4         iCol = 4
//Output :      2 4 6 8 10
//              1 3 5 7 9
//              2 4 6 8 10
//              1 3 5 7 9
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern (int iRow ,int iCol)
{

    int iCnt1 = 0;
    int iCnt2 = 0;
    int iNo = 1;
    int iNo2 = 0;

    for (iCnt1 = 0; iCnt1 < iRow ; iCnt1++)
    {
        if (iCnt1 %2 == 0)
        {
            for (iCnt2 = 0; iCnt2 < iCol ; iCnt2++,iNo++)
            {
                printf("%d\t",2 * iNo);
            }
            iNo2 = 1;    
        }
        else 
        {
            for (iCnt2 = 0; iCnt2 < iCol ; iCnt2++,iNo2++)
            {
                printf("%d\t", iNo2++);
            }
            iNo = 1;  
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
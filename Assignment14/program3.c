//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program3.c
//Description : Accept number of rows and number of columns from user and display below pattern.
//Author :      Akshay Patil             
//Date :        12-06-25
//Input :       iRow = 5        iCol = 5
//Output :      a b c d e
//              1 2 3 4 5
//              a b c d e
//              1 2 3 4 5
//              a b c d e
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern (int iRow ,int iCol)
{

    int iCnt1 = 0;
    int iCnt2 = 0;
    int iNo = 1;
    char ch = '\0';

    for (iCnt1 = 0; iCnt1 < iRow ; iCnt1++)
    {
        iNo = 1;
        ch = 'A';

        if (iCnt1 %2 != 0)
        {
            for (iCnt2 = 0; iCnt2 < iCol ; iCnt2++,iNo++)
            {
                printf("%d\t",iNo);
            }   
        }
        else 
        {
            for (iCnt2 = 0; iCnt2 < iCol ; iCnt2++,ch++)
            {
                printf("%c\t", ch);
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
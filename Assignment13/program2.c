//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program2.c
//Description : Accept number of rows and number of columns from user and display below pattern.
//Author :      Akshay Patil             
//Date :        12-06-25
//Input :       iRow = 4         iCol = 4
//Output :      A B C D
//              a b c d
//              A B C D
//              a b c d
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern (int iRow , int iCol)
{
    int icnt1 = 0;
    int iCnt2 = 0;
    char ch1 = '\0' ;
    char ch2 = '\0';

    for (icnt1 = 1; icnt1 <= iRow; icnt1++ )
    {
        for (iCnt2 = 1, ch1 = 'A',ch2 = 'a'; iCnt2 <= iCol; iCnt2++,ch1++,ch2++)
        {
            if (icnt1 % 2 == 0)
            {
                printf ("%c\t",ch2);
            }
            else 
            {
                printf ("%c\t",ch1);
            }
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
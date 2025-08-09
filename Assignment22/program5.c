///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Author      :   Akshay Patil
// File name   :   program5.c
// Description :   Accept division of student from user and display exam timing.
//                 Divisions and timings:
//                     A → 7:00 AM
//                     B → 8:30 AM
//                     C → 9:20 AM
//                     D → 10:30 AM
//                 Application should be case insensitive.
// Date        :   22-07-25
//
// Input       :   C
// Output      :   Your exam at 9.20 AM
//
// Input       :   d
// Output      :   Your exam at 10.30 AM
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Displayschedule(char ch)
{
    if (ch == 'A' || ch == 'a')
    {
        printf("Your exam at 7.00 AM");
    }
    else if (ch == 'B' || ch == 'b')
    {
        printf("Your exam at 8:30 AM");
    }
    else if (ch == 'C' || ch == 'c')
    {
        printf("Your exam at 9.20 AM");
    }
    else if (ch == 'D' || ch == 'd')
    {
        printf("Your exam at 10.30 AM");
    }
}

int main ()
{
    char cValue = '\0';

    printf("Enter the Character");

    scanf("%c",&cValue);

    Displayschedule(cValue);

    return 0;
}
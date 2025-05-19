///////////////////////////////////////////////////////////////////////////////////////////
//
//
//File name :   program 3.c
//Description : Program to print 5 to 1 numbers on screen.
//Author :      Akshay Patil
//Date :        12-05-25
//
//
///////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Display()
{
    int i = 0;
    i = 5;
    while( i>=1 )
    {
        printf("%d",i);
        i--;
    }
}
int main()
{
    Display();
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program4.c
//Description : Accept one character from user and convert case of that character.
//Author :      Akshay Patil
//Date :        19-05-25
//
/////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void DisplayConvert(char cValue)
{
    if(('a' <= cValue) && (cValue <= 'z'))
    {
        printf("%c",cValue-32);
    }
    else if(('A' <= cValue) && (cValue <= 'Z' ))
    {
        printf("%c",cValue+32);
    }
}

int main()
{
   char cValue = '\0';
   
   printf("Enter Character \n");
   scanf(" %c", & cValue);
    
    DisplayConvert(cValue);
    return 0;
}
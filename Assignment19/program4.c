//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program4.c
//Description : Accept N numbers from user and return frequency of 11 form it.
//Author :      Akshay Patil             
//Date :        22-06-25
//Input :       N : 6
//              Elements :85 66 3 80 93 88          : 85 11 3 15 11 111
//Output :      0                                     2
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountFreq(int Arr [], int iLength)
{
    int iCnt = 0; 
    int iCount = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            iCount++;
        }
        
    }

    return iCount;
}
int main ()
{
    int iSize = 0 , iCnt = 0 , iRet = 0;  
    int * p = NULL;

    printf("Enter Number of elements : ");
    scanf("%d",&iSize);

    if (iSize <= 0 )
    {
        printf(" Size of elements is too less ");
        return -1;
    }

    p = (int *)malloc (iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate the memoey");
        return -1;
    }

    printf("enter the %d elements : \n",iSize);

    for (iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("enter the element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = CountFreq (p , iSize);

    printf("frequency of 11 is :-  %d  ", iRet);

    free (p);

    return 0;
}
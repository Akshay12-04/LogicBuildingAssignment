//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program1.c
//Description : Accept N numbers from user and return frequency of even numbers.
//Author :      Akshay Patil             
//Date :        22-06-25
//Input :       N : 6
//              Elements :85 66 3 80 93 88
//Output :      3
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr [], int iLength)
{
    int iCount =0;
    int iCnt =0; 

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
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

    if (iSize < 0 )
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

    iRet = CountEven (p , iSize);

    printf("There are %d even numbers ", iRet);

    free (p);

    return 0;
}
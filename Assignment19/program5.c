//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program5.c
//Description : Accept N numbers from user and accept one another number as NO,
//              return frequency of NO from it.
//Author :      Akshay Patil             
//Date :        22-06-25
//Input 1 :     N : 6
//              NO : 66
//              Elements : 85 66 3 66 93 88
//Output 1 :    2
//
//Input 2 :     N : 6
//              NO : 12
//              Elements : 85 11 3 15 11 111
//Output 2 :    0
//////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int CountFreq(int Arr [], int iLength,int iNo)
{
    int iCnt = 0; 
    int iCount = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            iCount++;
        }
        
    }

    return iCount;
}
int main ()
{
    int iSize = 0 , iCnt = 0 , iRet = 0 , iNo = 0;  
    int * p = NULL;

    printf("Enter Number of elements : ");
    scanf("%d",&iSize);

    printf("Enter iNo : ");
    scanf("%d",&iNo);

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

    iRet = CountFreq (p , iSize,iNo);

    printf("frequency of %d is :-  %d  ",iNo,iRet);

    free (p);

    return 0;
}
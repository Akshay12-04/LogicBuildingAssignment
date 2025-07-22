//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//File name :   program4.c
//Description : Accept N numbers from user and check whether number 11 is present or not.
//Author :      Akshay Patil             
//Date :        22-07-22
//Input :       N : 6
//              Elements :85 66 11 80 93 88
//Output :      11 is present
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

#define True 1
#define False 0

typedef int BOOL ;

BOOL Check(int Arr [], int iLength)
{
    int iCnt = 0; 
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            return True ;
        }

        
    }
    return False;

}
int main ()
{
    int iSize = 0 , iCnt = 0 , bRet = 0;  
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

    bRet = Check(p , iSize);

    if (bRet == True)
    {
        printf("11 is Present");
    }
    else
    {
        printf("11 is Absent");
    }

    free (p);

    return 0;
}
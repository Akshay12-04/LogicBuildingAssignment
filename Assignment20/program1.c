//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name   :   program1.c
// Description :   Accept N numbers from user and accept one another number as NO,
//                 check whether NO is present or not.
// Author      :   Akshay Patil
// Date        :   22-07-25
// Input       :   N : 6
//                 NO: 66
//                 Elements : 85 66 3 66 93 88
// Output      :   TRUE
//
// Input       :   N : 6
//                 NO: 12
//                 Elements : 85 11 3 15 11 111
// Output      :   FALSE
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include<stdlib.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL Check (int Arr[], int iLength , int iValue)
{
    int iCnt = 0; 

    for (iCnt =0; iCnt < iLength; iCnt++)
    {
        if (Arr [iCnt] == iValue)
        {
            return True;
        }
    }
    return False;

}
 
int main ()
{
    int iCnt = 0 , iSize = 0 , iValue;
    int bRet = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    printf("Enter number to check : ");
    scanf("%d", &iValue);

    if (iSize < 0)
    {
        printf("The size is Too less");
        return -1;
    }

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1 ;
    }

    printf("Enter the %d elements \n",iSize);

    for (int iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter the element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize,iValue);

    if (bRet ==True )
    {
        printf("Number %d is Present",iValue);
    }
    else 
    {
        printf("Number %d is Absent",iValue);
    }

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
// File name   :   program3.c
// Description :   Accept N numbers from user and accept one another number as NO,
//                 return index of last occurrence of that NO.
// Author      :   Akshay Patil
// Date        :   22-07-25
// Input       :   N : 6
//                 NO: 66
//                 Elements : 85 66 3 66 93 88
// Output      :   3
//
// Input       :   N : 6
//                 NO: 93
//                 Elements : 85 66 3 66 93 88
// Output      :   4
//
// Input       :   N : 6
//                 NO: 12
//                 Elements : 85 11 3 15 11 111
// Output      :   -1
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>

int LastOcc (int Arr[], int iLength , int iValue)
{
    int iCnt = 0; 

    for (iCnt = iLength-1 ; iCnt > 0; iCnt--)
    {
        if (Arr [iCnt] == iValue)
        {
            return iCnt;
        }
    }
    
    return -1;
}
 
int main ()
{
    int iCnt = 0 , iSize = 0 , iValue;
    int iRet = 0;
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

    iRet = LastOcc(p,iSize,iValue);

    if (iRet == -1 )
    {
        printf("There is no such number");
    }
    else 
    {
        printf("Last occurrence of number is %d",iRet);
    }

    return 0;
}
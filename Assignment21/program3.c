///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name   :   program3.c
// Description :   Accept N numbers from user and return the difference between largest and smallest number.
// Author      :   Akshay Patil
// Date        :   22-07-25
// Input       :   N : 6
//                 Elements : 85 66 3 66 93 88
// Output      :   90 (Largest: 93, Smallest: 3)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include<stdlib.h>

int Difference (int Arr[], int iLength )
{
    int iCnt = 0  ;
    int iMax = 0;
    int iMin = Arr[0]; 

    for (iCnt =0; iCnt < iLength; iCnt++ )
    {
        
        if (Arr [iCnt] < iMin )
        {
            iMin = Arr[iCnt] ;
        }

        if (Arr [iCnt] > iMax )
        {
            iMax = Arr[iCnt] ;
        }
        
    }
    
    return iMax - iMin ;
}
 
int main ()
{
    int iCnt = 0 , iSize = 0 , iValue;
    int iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

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

    iRet = Difference(p,iSize);

    printf("Difference is %d",iRet);
    free(p);
    return 0;
}
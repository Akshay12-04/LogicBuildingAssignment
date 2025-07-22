///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name   :   program4.c
// Description :   Accept N numbers from user and accept range (Start, End),Display all elements from that range.
// Author      :   Akshay Patil
// Date        :   22-07-25
// Input       :   N : 6
//                 Start: 60
//                 End : 90
//                 Elements : 85 66 3 76 93 88
// Output      :   85 66 76 88
//
// Input       :   N : 6
//                 Start: 30
//                 End : 50
//                 Elements : 85 66 3 76 93 88
// Output      :   (No output)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>

void  Range (int Arr[], int iLength , int iValue1 , int iValue2)
{
    int iCnt = 0; 

    for (iCnt =0; iCnt < iLength; iCnt++)
    {
        if (Arr [iCnt] > iValue1  && Arr [iCnt] < iValue2  )
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    
}
 
int main ()
{
    int iCnt = 0 , iSize = 0 , iValue1 = 0 ,iValue2 = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    printf("Enter the Range : ");
    scanf("%d %d", &iValue1 ,&iValue2);

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

    Range(p,iSize,iValue1,iValue2);

    return 0;
}
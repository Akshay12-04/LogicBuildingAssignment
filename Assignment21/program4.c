//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name   :   program4.c
// Description :   Accept N numbers from user and display all such numbers which contain 3 digits.
// Author      :   Akshay Patil
// Date        :   22-07-25
// Input       :   N : 6
//                 Elements : 85 666 3 123 93 888
// Output      :   666 123 888
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include<stdlib.h>

void Display (int Arr[], int iLength )
{
    int iCnt = 0  ;

    for (iCnt =0; iCnt < iLength; iCnt++ )
    {
        if (Arr [iCnt] < 1000 && (Arr[iCnt] > 99))
        {
            printf("%d\t",Arr[iCnt]);
        }
        
        
    }
}
 
int main ()
{
    int iCnt = 0 , iSize = 0 , iValue;
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

    Display(p,iSize);

    
    free(p);
    return 0;
}
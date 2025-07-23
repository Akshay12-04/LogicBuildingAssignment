//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name   :   program5.c
// Description :   Accept N numbers from user and display summation of digits of each number.
// Author      :   Akshay Patil
// Date        :   22-07-25
// Input       :   N : 6
//                 Elements : 8225 665 3 76 953 858
// Output      :   17 17 3 13 17 21
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>

void Display (int Arr[], int iLength )
{
    int iCnt = 0 ;
    int iNo = 0;
    int temp = 0; 
    int iSum = 0; 

    for (iCnt =0; iCnt < iLength; iCnt++ )
    {
        iNo = Arr[iCnt];

        iSum = 0;
        while (iNo != 0)
        {
            temp = iNo % 10;
            iNo = iNo / 10;
            iSum = iSum + temp;
        }
        printf("%d\t", iSum);
        
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
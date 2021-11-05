///////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept N numbers from user and return smallest number.
//
// Input  : N : 6  
//          Elements : 85   66  3   76  93  88
// Output : 3
//
// Author : Girish Ashok Pawar
// Date : 27/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include <stdio.h>
#include <stdlib.h>

// Function declaration
int Minimun(int Arr[], int Length);

// Entry point function
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;      // Local variables
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));     // Dynamic memory allocation

    if (p == NULL)      // If memory is not allocated
    {
        printf("Unable to allocate memory : ");
        return -1;
    }

    printf("\nEnter %d elements one by one : ", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)        // Accept array elements
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Minimun(p, iSize);       // Function call

    printf("\nSmallest number is : %d", iRet);

    free(p);        // Free memory

    return 0;
}

// Function defination
int Minimun(int Arr[], int Length)
{
    // Logic
    int i = 0, iMin = Arr[0];

    for (i = 0; i < Length; i++)
    {
        if (Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }

    return iMin;
}

// Time complexity : O(n)
// Where n = size of array
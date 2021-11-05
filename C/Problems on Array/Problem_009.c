////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept N numbers from user and return frequency of 11 from it.
//
// Input  : N : 6
//          Elements : 85   66  3   15  93  88
// Output : 0
//
// Input  : N : 6
//          Elements : 85   11  3   15  11  111
// Output : 2
//
// Author : Girish Ashok Pawar
// Date : 26/09/2021
//
///////////////////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include <stdio.h>
#include <stdlib.h>

// Function declaration
int Frequency(int Arr[], int Length);

// Entry point function
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0; // Local varibles
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int)); // Dynamic memory allocation

    if (p == NULL) // If memory is not allocated
    {
        printf("Unable to allocate memory : ");
        return -1;
    }

    printf("\nEnter %d elements one by one : ", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++) // Accept array elements
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize); // Function call

    printf("Result is %d", iRet);

    free(p); // Free allocated memory

    return 0; // Return success to os
}

// Function defination
int Frequency(int Arr[], int iLength)
{
    // Logic

    int iCnt = 0, iFrequency = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            iFrequency++;
        }
    }

    return iFrequency;
}

// Time complexity : O(n)
// Where n = size of array
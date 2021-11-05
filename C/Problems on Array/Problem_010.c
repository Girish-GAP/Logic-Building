////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept N numbers from user and accept another number as No,
//                     return frequency of No from it.
//
// Input  : N : 6      No : 66
//          Elements : 85   66  3   66  93  88
// Output : 2
//
// Input  : N : 6      No : 12
//          Elements : 85   11  3   15  11  111
// Output : 0
//
// Author : Girish Ashok Pawar
// Date : 26/09/2021
//
///////////////////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include <stdio.h>
#include <stdlib.h>

// Function declaration
int Frequency(int Arr[], int iLength, int iNo);

// Entry point function
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iNo; // Local variables
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int)); // Dynamic memory allocation

    if (p == NULL) // If memory is not allocated
    {
        printf("Unable to allocate memory : ");
        return -1;
    }

    printf("\nEnter a number to count frequency : ");
    scanf("%d", &iNo);

    printf("\nEnter %d elements one by one : ", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++) // Accept Array elements
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize, iNo); // Function call

    printf("Result is %d", iRet);

    free(p); // Free memory

    return 0; // Return success to os
}

// Function defination
int Frequency(int Arr[], int iLength, int iNo)
{
    // Logic

    int iCnt = 0, iFrequency = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }

    return iFrequency;
}

// Time complexity : O(n)
// Where n = size of array
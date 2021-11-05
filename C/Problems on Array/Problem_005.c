////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept N numbers from user and display all such elements which are
//                     multiples of 11.
//
// Input  : N : 6
//          Elements : 85   66  3   55  93  88
// Output : 66  55  88
//
// Author : Girish Ashok Pawar
// Date : 26/09/2021
//
///////////////////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include <stdio.h>
#include <stdlib.h>

// Function declaration
void Display(int Arr[], int Length);

// Entry point function
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0; // Local variables
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int)); // Dyanamic memory allocation

    if (p == NULL) // If memory is not allocated
    {
        printf("Unable to allocate memory : ");
        return -1;
    }

    printf("\nEnter %d elements one by one : \n");

    for (iCnt = 0; iCnt < iSize; iCnt++) // Accepting array elements
    {
        scanf("%d", &p[iCnt]);
    }

    printf("\nElements which are multiple of 11 are : \n");

    Display(p, iSize); // Function call

    free(p); // Free allocated memory

    return 0; // Return success to os
}

// Function defination
void Display(int Arr[], int iLength)
{
    // Logic
    int iCnt = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] % 11 == 0))
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

// Time complexity : O(n)
// Where n = size of array
////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept N numbers from user and display all such elements which are
//                     even and divisible by 5.
//
// Input  : N : 6
//          Elements : 85   66  3   80  93  88
// Output : 80
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

    p = (int *)malloc(iSize * sizeof(int)); // Dynamic memory allocation

    if (p == NULL) // If memory is not allocated
    {
        printf("Unable to allocate memory : ");
        return -1;
    }

    printf("\nEnter %d elements one by one : \n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++) //Accepting array elements
    {
        scanf("%d", &p[iCnt]);
    }

    printf("\nElements which are even & divisible by 5 are : \n");

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
        if ((Arr[iCnt] % 5 == 0) && (Arr[iCnt] % 2 == 0))
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

// Time complexity : O(n)
// Where n = size of array
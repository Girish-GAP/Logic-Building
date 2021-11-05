///////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept N numbers from user and accept Range, Display all elements from
//                     that range.
//
// Input  : N : 6      Start : 60      End : 90
//          Elements : 85   66  3   76  93  88
// Output : 85  66  76  88
//
// Input  : N : 6      Start : 30   End : 50
//          Elements : 85   66  3   76  93  88
// Output :
//
// Author : Girish Ashok Pawar
// Date : 27/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include <stdio.h>
#include <stdlib.h>

// Function declaration
void Range(int Arr[], int Length, int iValue1, int iValue2);

// Entry point function
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue1 = 0, iValue2 = 0; // Local variables
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int)); // Dynamic memory allocations

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

    printf("\nEnter Start -> ");
    scanf("%d", &iValue1);

    printf("\nEnter End -> ");
    scanf("%d", &iValue2);

    Range(p, iSize, iValue1, iValue2); // Function call

    free(p); // Free memory

    return 0;
}

// Function defination
void Range(int Arr[], int Length, int iStart, int iEnd)
{
    // Logic

    int i = 0;

    for (i = 0; i < Length; i++)
    {
        if (Arr[i] > iStart && Arr[i] < iEnd)
        {
            printf("%d\t", Arr[i]);
        }
    }
}

// Time complexity : O(n)
// Where n = size of array
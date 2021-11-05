////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept N numbers from user and return difference between summation
//                     of even elements and summation of odd elements.
//
// Input  : N : 6
//          Elements : 85   66  3   80  93  88
// Output : 53  (234-181)
//
// Author : Girish Ashok Pawar
// Date : 26/09/2021
//
///////////////////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include <stdio.h>
#include <stdlib.h>

// Function declaration
int Difference(int Arr[], int Length);

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

    for (iCnt = 0; iCnt < iSize; iCnt++) // Accepting input
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iSize); // Function defination

    printf("Result is %d", iRet);

    free(p); // Free alocated memory

    return 0;
}

// Function defination
int Difference(int Arr[], int iLength)
{
    int iCnt = 0, EvenSum = 0, OddSum = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] % 2) == 0)
        {
            EvenSum = EvenSum + Arr[iCnt];
        }
        else
        {
            OddSum = OddSum + Arr[iCnt];
        }
    }

    return EvenSum - OddSum;
}

// Time complexity : O(n)
// Where n = size of array
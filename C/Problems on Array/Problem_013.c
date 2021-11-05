////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept N numbers from user and accept another number as No,
//                     return index of last occurance of that No.
//
// Input  : N : 6      No : 66
//          Elements : 85   66  3   66  93  88
// Output : 3
//
// Input  : N : 6      No : 12
//          Elements : 85   11  3   15  11  111
// Output : -1
//
// Author : Girish Ashok Pawar
// Date : 27/09/2021
//
///////////////////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include <stdio.h>
#include <stdlib.h>

// Function declaration
int LastOcc(int Arr[], int Length, int iNo);

// Entry point function
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iNo = 0; // Local variables
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int)); // Dynamic meory allocation

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

    printf("\nEnter a number to find its index : ");
    scanf("%d", &iNo);

    iRet = LastOcc(p, iSize, iNo); // Function call

    if (iRet == -1)
    {
        printf("%d Number is not there", iNo);
    }
    else
    {
        printf("%d Number last occurance at index : %d", iNo, iRet);
    }

    free(p); // Free memory

    return 0;
}

// Function defination
int LastOcc(int Arr[], int Length, int iNo)
{
    // Logic

    int i = 0;

    for (i = Length - 1; i >= 0; i--)
    {
        if (Arr[i] == iNo)
        {
            break;
        }
    }

    if (i == Length)
    {
        return -1;
    }
    else
    {
        return i;
    }
}
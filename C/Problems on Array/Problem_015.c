///////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept N numbers from user and return product of all odd elements.
//
// Input  : N : 6
//          Elements : 15   66  3   70  10  88
// Output : 45
//
// Input  : N : 6
//          Elements : 44   66  72   70  10  88
// Output : 0
//
// Author : Girish Ashok Pawar
// Date : 28/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include <stdio.h>
#include <stdlib.h>

// Function declaration
int Product(int Arr[], int Length);

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

    printf("\nEnter %d elements one by one : ", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++) // Accept array elements
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Product(p, iSize); // Function call

    if (iRet == -1)
    {
        printf("\n (0) No odd numbers ! ");
    }
    else
    {
        printf("Product is : %d", iRet);
    }

    free(p); // Free memory

    return 0;
}

// Function defination
int Product(int Arr[], int Length)
{
    // Logic

    int i = 0, iProduct = 1, iNo = 0;

    for (i = 0; i < Length; i++)
    {
        if (Arr[i] % 2 != 0)
        {
            iProduct = iProduct * Arr[i];
            iNo++;
        }
    }

    if (iNo == 0)
    {
        return -1;
    }
    else
    {
        return iProduct;
    }
}

// Time complexity : O(n)
// Where n = size of array
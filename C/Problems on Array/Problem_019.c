/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept N numbers from user and Display all such numbers which contains 3 digits in it.
//
// Input  : N : 6
//          Elements : 8525   665  3   76  953  858
// Output : 3  953
//
// Author : Girish Ashok Pawar
// Date : 28/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include <stdio.h>
#include <stdlib.h>

// Function declaration
void Digits(int Arr[], int Length);

// Entry point function
int main()
{
    int iSize = 0, iCnt = 0; // Local variables
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

    Digits(p, iSize); // Function call

    free(p); // Free memory

    return 0;
}

// Function defination
void Digits(int Arr[], int Length)
{
    // Logic

    int i = 0, iDigit = 0, iNo = 0;

    for (i = 0; i < Length; i++)
    {
        iNo = Arr[i];

        while (iNo != 0)
        {
            iDigit = iNo % 10;

            if (iDigit == 3)
            {
                printf("%d\t", Arr[i]);
                break;
            }
            iNo = iNo / 10;
        }
    }
}

// Time complexity : O(n)
// Where n = size of array
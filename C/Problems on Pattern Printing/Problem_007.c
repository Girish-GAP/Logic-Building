//////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept number from user and display below pattern.
//
// Input  : iRow = 4   iCol = 3
// Output : 1   2   3
//          1   2   3
//          1   2   3
//          1   2   3
//
// Author : Girish Ashok Pawar
// Date : 21-09-2021
//
//////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include <stdio.h>

// Function declaration
void Pattern(int, int);

// Entry point function
int main()
{
    int iValue1 = 0; // Local variables
    int iValue2 = 0;

    printf("\nEnter number of rows : ");
    scanf("%d", &iValue1);

    printf("\nEnter number of Columns : ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2); // Function call

    return 0;
}

// Function defination
void Pattern(int iRow, int iCol)
{
    // Logic

    int i = 0, j = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%d\t", j);
        }

        printf("\n");
    }
}

// Time Complexity : O(n^2)
// Where, n = Number of rows & columns
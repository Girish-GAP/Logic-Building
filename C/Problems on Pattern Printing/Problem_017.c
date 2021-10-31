//////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept number of rows and columns from user and display below pattern.
//
// Input  : iRow = 4     iCol = 4
// Output : *   *   *   *
//          *   *   *   #
//          *   *   #   #
//          *   #   #   #
//
// Author : Girish Ashok Pawar
// Date : 23-09-2021
//
//////////////////////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include <stdio.h>

// Function declaration
void Pattern(int, int);

// Entry point function
int main()
{
    int iValue1 = 0; // Local variables
    int iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d", &iValue1);

    printf("Enter numbers of columns : ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2); // Function call

    return 0;
}

// Function defination
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for (i = 1; i <= iRow; i++) // For rows
    {
        {
            for (j = 1; j <= iCol; j++) // For columns
            {
                if ((j + i) > (iCol + 1))
                {
                    printf("#\t");
                }

                else
                {
                    printf("*\t");
                }
            }
        }

        printf("\n");
    }
}

// Time Complexity : O(n^2)
// Where, n = Number of rows & columns

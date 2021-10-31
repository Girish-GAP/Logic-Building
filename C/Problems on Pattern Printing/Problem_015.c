//////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept number of rows and columns from user and display below pattern.
//
// Input  : iRow = 3     iCol = 4
// Output : 1   2   3   4
//          5   6   7   8
//          9   10  11  12
//
// Author : Girish Ashok Pawar
// Date : 23-09-2021
//
//////////////////////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include <stdio.h>

// Function defination
void Pattern(int, int);

// Entry point function
int main()
{
    int iValue1 = 0; // Local variables
    int iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d", &iValue1);

    printf("Enter number of Columns : ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2); // Function call

    return 0;
}

// Function defination
void Pattern(int iRow, int iCol)
{
    // Logic
    int i = 0, j = 0, iCnt = 1;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++, iCnt++)
        {
            printf("%d\t", iCnt);
        }
        printf("\n");
    }
}

// Time Complexity : O(n^2)
// Where, n = Number of rows & columns

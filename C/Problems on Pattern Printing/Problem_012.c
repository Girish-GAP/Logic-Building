//////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept number of rows and columns from user and display below pattern.
//
// Input  : iRow = 4     iCol = 4
// Output : A   B   C   D
//          a   b   c   d
//          A   B   C   D
//          a   b   c   d
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

    printf("Enter number of Columns : ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2); // Function call

    return 0;
}

// Function defination
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0; // Local variables
    char Cch = '\0';
    char Sch = '\0';

    // Logic
    for (i = 1; i <= iRow; i++)
    {
        for (j = 1, Cch = 'A', Sch = 'a'; j <= iCol; j++, Cch++, Sch++)
        {
            if (i % 2 == 0)
            {
                printf("%c\t", Sch);
            }
            else
            {
                printf("%c\t", Cch);
            }
        }
        printf("\n");
    }
}

// Time Complexity : O(n^2)
// Where, n = Number of rows & columns

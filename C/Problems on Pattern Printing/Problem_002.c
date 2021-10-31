////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept number from user and display below pattern
//
// Input : 5    Output : 5  #   4   #   3   #   2   #   1   #
//
// Author : Girish Ashok Pawar
// Date : 21-09-2021
//
/////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include <stdio.h>

// Function Declaration
void Pattern(int);

// Entry point function
int main()
{
    int iValue = 0; // Local variable

    printf("Enter the number : "); // Accept input
    scanf("%d", &iValue);

    Pattern(iValue); // Function call

    return 0;
}

// Function defination
void Pattern(int iNo)
{
    int iCnt = 0;

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t", iCnt);
    }
}

// Time Complexity : O(n)
// Where, n = input number
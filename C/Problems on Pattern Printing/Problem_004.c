///////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept number from user and display below pattern
//
// Input : 4    Output : #  1   *   #   2   *   #   3   *   #   4   *
//
// Author : Girish Ashok Pawar
// Date : 21-09-2021
//
///////////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include <stdio.h>

// Function declaration
void Pattern(int);

// Entry point function
int main()
{
    int iValue = 0; // Local variable

    printf("Enter a number : ");
    scanf("%d", &iValue); // Accept input

    Pattern(iValue); // Function call

    return 0; // Return success to os
}

// Function defination
void Pattern(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t%d\t*\t", iCnt);
    }
}

// Time Complexity : O(n)
// Where, n = input number
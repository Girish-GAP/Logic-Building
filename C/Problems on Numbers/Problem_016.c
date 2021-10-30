/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Write a program which accept number from user and return the count of odd digits.
//
// Test cases:
// Input : 2395     Output : 3
// Input : 1018     Output : 2
//
// Author : Girish Ashok Pawar
// Date : 17-09-2021
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include <stdio.h>

// Function declaration
int CountOdd(int);

// Entry Point Function
int main()
{
    int iValue = 0; // Local variables
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue); // Accept input

    iRet = CountOdd(iValue); // Function call

    printf("The count of odd digits is : %d", iRet);

    return 0; // Return success to os
}

// Function Defination
int CountOdd(int iNo)
{
    // Logic

    int iDigit = 0;
    int iCnt = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if ((iDigit % 2) != 0)
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

    return iCnt;
}

// Time Complexity : O(n)
// Where n = no. of Digits
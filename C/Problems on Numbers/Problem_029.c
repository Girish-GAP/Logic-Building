////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Write a program which accept range from user and display all numbers
//                     between that range in reverse order.
//
// Test cases:
// Input : 23   28      Output : 28 27  26  25  24  23
// Input : 10   10      Output : 10
// Input : -3   2       Output : 2   1   0   -1  -2  -3
//
// Author : Girish Ashok Pawar
// Date : 19-09-2021
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include <stdio.h>

// Function declaration
void RangeDisplayRev(int, int);

// Entry point function
int main()
{
    int iValue1 = 0;        // Local variables
    int iValue2 = 0;

    printf("\nEnter statring number : ");
    scanf("%d", &iValue1);

    printf("\nEnter Ending Number:  ");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);      // Function call

    return 0;       // Return success to os
}

// Function defination
void RangeDisplayRev(int iNo1, int iNo2)
{
    int iCnt = 0;       // Local variable

    if (iNo1 > iNo2)          // Filter
    {   
        printf("Invalid range");
        return;
    }

    for (iCnt = iNo2; iCnt >= iNo1; iCnt--)     // Logic
    {
        printf("%d\t", iCnt);
    }
}


// Time Complexity O(n)
// Where, n = numbers in Range


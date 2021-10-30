////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Write a program which accept range from user and display all numbers 
//                     in between that range.
//
// Test cases:
// Input : 23   28      Output : 23 24 25 26 27 28
// Input : 10   10      Output : 10
// 
// Author : Girish Ashok Pawar
// Date : 19-09-2021
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include<stdio.h>

// Function declaration
void RangeDisplay(int, int);


// Entry point function
int main()
{
    int iValue1 = 0;        // Local variables
    int iValue2 = 0;

    printf("\nEnter statring number : ");
    scanf("%d", &iValue1);

    printf("\nEnter Ending Number:  ");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);     // Function call

    return 0;       // Return success to os
}


// Function defination
void RangeDisplay(int iNo1, int iNo2)
{
    int iCnt = 0;

    if (iNo1 > iNo2)    // Filter  
    {
        printf("Invalid range");
        return;
    }

    for(iCnt = iNo1; iCnt <= iNo2; iCnt++ )     // Logic
    {
        printf("%d\t", iCnt);
    }
}


// Time Complexity O(n)
// Where, n = numbers in Range


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Write a program which accept range from user and return addition of all even numbers
//                     in between that range. (Range should contains positive numbers only)
//
// Test cases:
// Input : 23   30      Output : 108
// Input : 10   18      Output : 70
//
// Author : Girish Ashok Pawar
// Date : 19-09-2021
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include <stdio.h>

// Function declaration
int RangeSumEven(int, int);

// Entry point function
int main()
{
    int iValue1 = 0;        // Local variables
    int iValue2 = 0;
    int iRet = 0;

    printf("\nEnter statring number : ");
    scanf("%d", &iValue1);

    printf("\nEnter Ending Number:  ");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);      // Function call

    printf("%d", iRet);

    return 0;       // Return success to os
}

// Function defination
int RangeSumEven(int iNo1, int iNo2)
{
    int iCnt = 0;       // Local variables
    int iSum = 0;

    if (iNo1 <= 0 || iNo2 <= 0 || iNo1 > iNo2)      // Filter
    {
        printf("Invalid range");
        return 0;
    }

    for (iCnt = iNo1; iCnt <= iNo2; iCnt++)     // Logic
    {
        if (iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

// Time Complexity O(n)
// Where, n = numbers in Range


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Write a program which accept number from user and return the count of digits in between 3 & 7.
//                     
// Test Cases : 
// Input : 4521     Output : 2
// Input : 1018     Output : 0
//
// Author : Girish Ashok Pawar
// Date : 17-09-2021
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include <stdio.h>

// function declaration
int CountRange(int);


// Entry point function
int main()
{
    int iValue = 0;     // Local variables
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);           // Accept input

    iRet = CountRange(iValue);      // Function call

    printf("The Count of digits between 3 & 7 are : %d", iRet);

    return 0;       // Return success to os
}

// Function defination
int CountRange(int iNo)
{
    int iDigit = 0;     // Local variables
    int iCnt = 0;

    while (iNo != 0)      
    {
        iDigit = iNo % 10;

        if ((iDigit >= 3) && (iDigit <= 7))
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

    return iCnt;
}


// Time Complexity O(n)
// Where, n = No. of digits


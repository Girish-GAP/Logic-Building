//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Write a program which accept number from user and check whether it is contain 0 or not.
//
// Input : 2395
// Output : There is no zero
//
// Input : 230
// Output : There is zero
//
// Author : Girish pawar
// Date : 14/09/2021
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include <stdio.h>

// Typedef for Boolean use
typedef int BOOL;
#define TRUE 1
#define FALSE 0

// Function Declaration
BOOL CheckZero(int);

// Entry point function
int main()
{
    int iValue = 0; // Local variables
    BOOL bRet = FALSE;

    printf("Enter a number : ");
    scanf("%d", &iValue); // Accept input

    bRet = CheckZero(iValue); // Function call

    if (bRet == TRUE)
    {
        printf("There is zero");
    }

    else
    {
        printf("There is no zero ");
    }

    return 0; // return success to os
}

// Function Defination
BOOL CheckZero(int iNo)
{
    int iDigit = 0;         // Local variables
    BOOL bAns = FALSE;

    while (iNo != 0)       // Logic
    {
        iDigit = iNo % 10;

        if (iDigit == 0)
        {
            bAns = TRUE;
            break;
        }

        iNo = iNo / 10;
    }

    return bAns;
}

// Time Complexity O(n)
// Where, n = No. of digits

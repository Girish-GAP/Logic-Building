/////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept number from user and check whether number is even or odd.
//
// Test cases :
// Input : 5        Ouput  : Odd
// Input : 4        Output : Even
//
// Author : Girish Pawar
// Date : 02-10-2021
//
//////////////////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include <stdio.h>

// typedef
typedef int BOOL;
#define TRUE 1
#define FALSE 0

// Function declaration
BOOL Check(int);

// Entry point function
int main()
{
    int iValue = 0;         // Local variable
    BOOL bRet = FALSE;

    printf("Enter a number : ");
    scanf("%d", &iValue);           // Accept input

    bRet = Check(iValue);       // Function call

    if (bRet == TRUE)
    {
        printf("\nNumber is Even !");
    }

    else
    {
        printf("\nNumber is Odd !");
    }

    return 0;       // Return success to os
}

// Function defiantion
BOOL Check(int iNo)
{
    BOOL bAns = FALSE;

    if ((iNo % 2) == 0)
    {
        bAns = TRUE;
    }

    return bAns;
}

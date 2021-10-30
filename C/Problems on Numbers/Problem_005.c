///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : write a program which accept one number from user and display its multiplication of factors.
//                     
// Test case :
// Input : 12
// Output : 144
//
// Author : Girish Pawar
// Date : 12-09-2021
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Inclusion of header file
#include <stdio.h>

// Function Declaration
int MultFactor(int);

//Entry point function
int main()
{
    int iValue = 0;     // Local variable
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);           // Accept input

    iRet =  MultFactor(iValue);     // Function call

    printf("%d", iRet);

    return 0;               // return success to os
}

// Function Defination
int MultFactor(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if (iNo == 0)       // Filter
    {
        printf("You enter number is ");
        return 0;
    }

    if (iNo < 0)        // Input updator
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {   
            iFact = (iFact * iCnt);
        }
    }

    return iFact;
}

// Time complexity : O(n/2)
// Where n = iNo (input number)

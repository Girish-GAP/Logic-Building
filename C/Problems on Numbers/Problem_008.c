////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : write a program which accept one number from user and return summation of all its non factor.
//                     
// Test case :
// Input  : 12
// Output : 50
//
// Author : Girish Ashok Pawar
// Date : 12-09-2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Inclusion of header file
#include <stdio.h>

// Function Declaration
int SumNonFact(int);

//Entry point function
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d", iRet);

    return 0;
}

// Function Defination
int SumNonFact(int iNo)
{
    int iCnt = 0;
    int FactSum = 0;

    if (iNo == 0)   // Filter
    {
        printf("You enter no. ");
        return 0;
    }

    if (iNo < 0)    // Input updator
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo ; iCnt++)    // Logic
    {
        if ((iNo % iCnt) != 0)
        {
            FactSum = FactSum + iCnt;
        }
    }

    return FactSum;
}

// Time complexity : O(n)
// Where n = iNo (input number)

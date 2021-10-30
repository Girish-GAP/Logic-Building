///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : write a program which accept one number from user and return summation of all factor & non factor.
//                     
// Test case :
// Input  : 12
// Output : -34     (16-50)
//
// Author : Girish Ashok Pawar
// Date : 12-09-2021
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Inclusion of header file
#include <stdio.h>

// Function Declaration
int FactDiff(int);

//Entry point function
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0;
}

// Function Defination
int FactDiff(int iNo)
{
    int iCnt = 0;
    int NonFactSum = 0;
    int FactSum = 0;

    if (iNo == 0)    // Filter
    {
        printf("You enter no. ");
        return 0;
    }

    
    if (iNo < 0)     // Input updator
    {
        iNo = -iNo;
    }

    
    for (iCnt = 1; iCnt < iNo ; iCnt++)      // Logic
    {
        if ((iNo % iCnt) == 0)
        {
            FactSum = FactSum + iCnt;
        }

        else
        {
             NonFactSum = NonFactSum + iCnt;
        }
        
    }

    return FactSum-NonFactSum;
}

// Time complexity : O(n)
// Where n = iNo (input number)

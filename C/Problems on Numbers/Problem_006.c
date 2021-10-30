////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : write a program which accept one number from user and display its factors in decresing order.
//                     
// Test case :
// Input : 12
// Output : 6   4   3   2   1
//
// Author : Girish Ashok Pawar
// Date : 12-09-2021
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Inclusion of header file
#include <stdio.h>

// Function Declaration
void FactorRev(int);

//Entry point function
int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    FactorRev(iValue);

    return 0;
}

// Function Defination
void FactorRev(int iNo)
{
    int iCnt = 1;

    if (iNo == 0)       // Filter
    {
        printf("You enter number is 0");
        return;
    }


    if (iNo < 0)    // Input updator
    {
        iNo = -iNo;
    }

    
    for (iCnt = iNo/2; iCnt >= 0 ; iCnt--)      // Logic
    {
        if ((iNo % iCnt) == 0)
        {   
            printf("%d\t", iCnt);
        }
    }

}

// Time complexity : O(n/2)
// Where n = iNo (input number)

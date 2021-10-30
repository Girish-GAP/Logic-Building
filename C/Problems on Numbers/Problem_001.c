///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept two numbers from user and dispaly first number in second number of time.
//
// Test cases:
// Input  : 12   5
// Output : 12  12  12  12  12
//
// Author : Girish Pawar
// Date : 01-01-2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include <stdio.h>

// Fucntion defiantion
void Display(int, int);

// Entry point function
int main()
{
    int iValue1 = 0, iValue2 = 0; // Local variables - intiger(i) value 1 and 2

    printf("Enter first number : ");
    scanf("%d", &iValue1); // Accept input

    printf("Enter second number : ");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2); // Function call

    return 0; // return sucsses to os
}

// Function defination
void Display(int iNo1, int iNo2)
{
    int iCnt = 0; // intiger(i) counter variable

    if (iNo2 < 0) // Input updator
    {
        iNo2 = -iNo2;
    }

    if (iNo2 == 0) // Filter
    {
        printf("Number 2 is 0 !");
        return;
    }

    for (iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        printf("%d\t", iNo1);
    }
}

// Time complexity : O(n)
// Where, n =  iNo2

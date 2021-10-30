/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Write a program which accept number from user and display its digits in reverse order.
//
// Input : 2395
// Output : 5932
//
// Author : Girish pawar
// Date : 14/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Inclusion of header file
#include <stdio.h>


// Function Declaration
void DisplayDigit(int);


// Entry point function
int main()
{
    int iValue = 0; // Local variable

    printf("Enter a number : ");
    scanf("%d", &iValue); // Taking input

    DisplayDigit(iValue);

    return 0; // Return success to os
}

// Function Defination
void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)    // Input updator
    {
        iNo = -iNo;
    }

    if (iNo == 0)       // Filter
    {
        printf("Your enter no. is 0 !");
        return;
    }

    while (iNo != 0)     // Logic
    {
        iDigit = iNo % 10;

        printf("%d\t", iDigit);

        iNo = iNo / 10;
    }
}

// Time Complexity O(n)
// Where, n = No. of digits

/////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Accept number from user and display below pattern.
//
// Input : 5    Output : A  B   C   D   E
//
// Author : Girish Ashok Pawar
// Date : 21-09-2021
//
///////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include <stdio.h>

// Function declaration
void Pattern(int);

// Entry point function
int main()
{
    int iValue = 0;

    printf("\nEnter a number : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}

// Function defination
void Pattern(int iNo)
{
    int iCnt = 0; // Local variables
    char Alpha = 'A';

    // Filter
    if (iNo > 26)
    {
        printf("\nThere are only 26 alphabets : \n");
        iNo = 26;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t", Alpha++);
    }
}

// Time Complexity : O(n)
// Where, n = input number
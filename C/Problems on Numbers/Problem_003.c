///////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Write a program which accept number from user and print that number of
//                     even numbers on screen.
//
// Test cases :
// Input : 7
// Ouput : 0    2   4   6   8   10  12
//
//Input : -5
// Ouput : 0    2   4   6   8   
//
// Author : Girish Pawar
// Date : 02-10-2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include <stdio.h.>

// Function defination
void Display(int);

// Entry point function
int main()
{
    int iValue = 0; // Local variable

    printf("Enter a number : ");
    scanf("%d", &iValue); // Accept input

    Display(iValue); // Function call

    return 0; // Return success to os
}

// Function defiantion
void Display(int iNo)
{
    int iCnt = 0, i = 0;

    if (iNo < 0) // Input updator
    {
        iNo = -iNo;
    }

    if (iNo == 0) // Filter
    {
        printf("Your enterd number is 0 !");
    }

    while (iCnt != iNo)
    {
        if (i % 2 == 0)
        {
            printf("%d\t", i);
            iCnt++;
        }
        i++;
    }
}

// Time complexity : O(n)
// Where n = i

////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Write a program which accept area in square feet and convert it into
//                     square meter.(1 sqf = 0.0929 sqm)
//
// Test Cases
// Input : 5    Output : 0.464515
// Input : 7    Output : 0.650321
//
// Author : Girish Ashok Pawar
// Date : 19-09-2021
//
////////////////////////////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include<stdio.h>

// Function defination
float SquareMeter(int);

// Entry point function
int main()
{
    int iValue = 0;         // Local variables
    float fRet = 0.0;

    printf("Enter area in Sqf : ");
    scanf("%d", &iValue);              // Accept input

   fRet = SquareMeter(iValue);      // Function call

   printf("Area in Square meter : %f", fRet);

   return 0;    // Return success to os
}


// Function Defination
float SquareMeter(int iNo)
{
    float SqMeter = 0.0;
    SqMeter = iNo * 0.0929;
    return SqMeter;
}

// Time Complexity : O(1)
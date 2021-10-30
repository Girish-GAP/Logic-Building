//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : write a program which accept radius of circle from user and calculate its area.
//                     Consider value fo PI as 3.14 (Area = PI * Radius * Radius)
//
// Test cases
// Input : 5.3      Output : 88.2026
// Input : 10.4     Output : 339.6224
//
// Author : Girish Ashok Pawar
// Date : 17-09-2021
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include<stdio.h>

// Function declaration
float CircleArea(float);


// Entry function
int main()
{
    float iValue = 0;       // Local variables
    float iRet = 0; 

    printf("Enter the radius of circle : ");
    scanf("%f", &iValue);                       // Accept input

    iRet = CircleArea(iValue);              // Function call

    printf("The area of circle is : %0.4f", iRet);

    return 0;          // Return success to os
}


// Function defination
float CircleArea(float iNo)
{
    float Area = 0;
    Area = 3.14 * (iNo * iNo);
    return Area;
}


// Time Complexity : O(1)









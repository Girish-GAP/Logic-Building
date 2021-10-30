//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Write a program which accept tempreture in Fahrenheit and convert 
//                     it into celsius. ( 1 celsius = (Fahrenheit - 32) * (5/9))
// 
// Test cases 
// Input : 10       Output : -12.2222  (10-32) * (5/9)
// Input : 34       Output : 1.11111   (34-32) * (5/9)
//
// Author : Girish Ashok Pawar
// Date : 18-09-2021
//
////////////////////////////////////////////////////////////////////////////////////////////////////// 

// Inclusion of header file
#include<stdio.h>

// Function Declaration
double FhtoCs(float);

// Entry point function
int main()
{
    float fValue = 0.0;         // Local variables
    double dRet = 0.0;

    printf("Enter the temprature in Fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);      // Function call

    printf("Fahrenheit : %.4f Celsius : %.4lf", fValue , dRet);

    return 0;       // Return success to os
}


// Functon defination
double FhtoCs(float fTemp)
{
    double iFahr = 0.0;
    iFahr = ((fTemp - 32) * (5.0/9.0));
    return iFahr;
}


// Time Complexity : O(1)
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Problem statement : Write a program which accept number form uer and return the multiplication of its all digits.
//                     
// Test cases :
// Input : 2395     Output : 270
// Input : 9440     Output : 144
//
// Author : Girish Ashok Pawar
// Date : 17-09-2021
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include<stdio.h>

// Function declaration
int MultDigits(int);


// Entry point function
int main()
{
    int iValue = 0;     // Local variables
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);           // Accept input

    iRet = MultDigits(iValue);      // Function call

    printf("The multiplication of digit is %d", iRet);

    return 0;       // Return success to os
}


// Function defination
int MultDigits(int iNo)
{
    // Logic 
    
    int iDigit = 1;
    int iMult = 1;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)     // If number contains 0 
        {
            iDigit = 1;
        }

        iMult = iMult * iDigit;

        iNo = iNo / 10;
    }

    return iMult;
}

// Time Complexity : O(n)
// where n = number of digits
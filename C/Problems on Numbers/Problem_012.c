/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Write a program which accept number form user and count frequency of 2 in  it.
//                     
//  Input : 2295    Output : 2
//  Input : 1080    Output : 0
//
//  Author : Girish Ashok Pawar
//  Date : 17-09-2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

// Header file inclusion 
#include<stdio.h>


// Function Declaration
int CountTwo(int);


// Entry point function
int main()
{
    int iValue = 0;     // Local variables
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);           // Accept input

    iRet = CountTwo(iValue);        // Function call

    printf("The Frequency of 2 is :  %d", iRet);

    return 0;   // Return success to os
}


// Function Defination
int CountTwo(int iNo)
{   
    
    int iCnt = 0;       // Local variable
    int iDigit = 0;

    if (iNo < 0)       // Input updator
    {
        iNo = -iNo;
    }

    while (iNo != 0)        // Logic
    {
        iDigit = (iNo % 10);
        
        if(iDigit == 2)
        {
            iCnt++;
        }

        iNo = iNo / 10;

    }

    return iCnt;


}

// Time Complexity O(n)
// Where, n = No. of digits


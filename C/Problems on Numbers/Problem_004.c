//////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Write a program which accept number from user and print 
//                     even factors of that number (excluding itself).
//
// Test cases :
// Input  : 36 
// Output : 2   4   6   12  18
//
// Author : Girish Pawar
// Date : 02-10-2021 
// 
/////////////////////////////////////////////////////////////////////////////////////

// Header file inclusion
#include<stdio.h>

// Fucntion declaration
void DisplayEvenFactor(int);


// Entry point function 
int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);

    return 0;
}


// Function defintion
void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)    // Input updator 
    {
        iNo = -iNo;
    }

    if (iNo == 0)   // Filter
    {
        printf("Your Enterd number is 0 !");
    } 

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)      // Factors are always upto half of number excluding itself 
    {
        if( ((iNo % iCnt) == 0) && ((iCnt % 2) == 0) )
        {
            printf("%d\t", iCnt);
        }
    }
}

// Time Complexity : O(n/2)
// Where n = iNo (input number)

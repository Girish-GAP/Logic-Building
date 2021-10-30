///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : Write a program which accept number from user and count frequency of 4 in it.
//
// Input : 2395     Output : 0
// Input : 9440     Output : 2
//
// Author : Girish Ashok Pawar
// Date : 17/09/2021
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


// Inclusion of header file
#include<stdio.h>


// Function Declaration
int CheckFour(int);


// Entry point function
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    iRet = CheckFour(iValue);

    printf("The count of 4 is : %d", iRet);

    return 0;
}


// Function defination
int CheckFour(int iNo)
{
    int iDigit = 0;     // Local variables
    int iCnt = 0;


    while (iNo != 0)       // Logic
    {
        iDigit = iNo % 10;

        if(iDigit == 4)
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

    return iCnt;
}

// Time Complexity O(n)
// Where, n = No. of digits


///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement : write a program which accept width and height of rectangle from user and
//                     calculate its area. (Area = Width * Height)
//
// Input :  5.3   9.78      Output : 51.8340
// 
// Author : Girish Ashok Pawar
// Date : 17-09-2021
//
//////////////////////////////////////////////////////////////////////////////////////////////////

// Inclusion of header file
#include<stdio.h>

// Function declaration
float RectArea(float, float);


// Entry point function
int main()
{
    float iWidth = 0;          // Local variables
    float iHeight = 0;
    float iRet = 0;

    printf("Enter the width of rectangle : ");
    scanf("%f", &iWidth);

    printf("Enter the Hight of rectangle : ");
    scanf("%f", &iHeight);

    iRet = RectArea(iWidth, iHeight);       // Function call

    printf("The Area of rectangle is : %.4f", iRet);

    return 0;       // Return success to os
}

// Function defination
float RectArea(float iW, float iH)
{
    float Area = 0;
    Area =  iW * iH;
    return Area;
}

// Time Complexity : O(1)

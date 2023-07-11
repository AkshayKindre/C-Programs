// Write a program which accepts the marks and display the class accordingly.
// 0 to 34      Fail
// 35 to 49     Pass class
// 50 to 59     Second class
// 60 to 74     First class
// 75 to 100    First class with Disticnction

#include <stdio.h>   //For printf and scanf
#include<stdbool.h>   // For bool data type

void DisplayClass(float fMarks)
{   
    if((fMarks < 0.0f) || (fMarks > 100.00f))      //Filter
    {
        printf("Invalid Input\n");
        printf("please enter marks between 0 to 100");

    }
    if ((fMarks >= 0.0f) && (fMarks < 35.00f))
    {
        printf("You are Fail\n");
    }
    else if((fMarks >= 35.00f) && (fMarks <50.00f))
    {
        printf("Pass class\n");
    }
    else if((fMarks >= 50.00f ) && (fMarks < 60.00f))
    {
        printf("Second class");
    }
    else if((fMarks >= 60.00f) && (fMarks < 75.00f))
    {
        printf("First class\n");
    }
    else if((fMarks >= 75.00f) && (fMarks <=100.00f))
    {
        printf("First class with Distinction\n");
    }
}

int main()
{
    float fValue = 0;

    printf("Please enter your percentage : \n");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}
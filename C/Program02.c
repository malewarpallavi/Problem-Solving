//////////////////////////////////////////////////////////
//                                                      //
//  File name :     Program2.c                          //
//  Description :   Used to Display class of result     //
//  Author :        Pallavi Omprakash Malewar           //
//  Date :          28/04/2025                          //
//                                                      //
//////////////////////////////////////////////////////////

/*
    Start
        Accept percentage from user
            If percentage is less than 0 and greater than 100
                Display as invalid input
            If percentage is greater than 0 and less than 35
                Display as fail
            If percentage is greater than 35 and less than 50
                Display as Pass class
            If percentage is greater than 50 and less than 60
                Display as second class
            If percentage is greater than 60 and less than 70
                Display as first class
            If percentage is greater than 70 and less than 100
                Display as first class with distinction
    Stop
*/


#include<stdio.h>

void DisplayClass(float fPercentage)
{

    if((fPercentage < 0.0f) || (fPercentage > 100.0f))
    {
        printf("Unable to proceed as input is Invalid.\n");
        
        return;
    }

    if((fPercentage >= 0.0f) && (fPercentage < 35.0f))
    {
        printf("You are Fail\n");
    }

    else if((fPercentage >= 35.0f) && (fPercentage < 50.0f))
    {
        printf("Pass Class\n");
    }

    else if((fPercentage >= 50.0f) && (fPercentage < 60.0f))
    {
        printf("Second Class\n");
    }

    else if((fPercentage >= 60.0f) && (fPercentage < 70.0f))
    {
        printf("First Class\n");
    }

    else if((fPercentage >= 70.0f) && (fPercentage <= 100.0f))
    {
        printf("First Class with Distinction\n");
    }

}


int main()
{
    float fValue = 0.0f ;

    printf("Please Enter your Percentage : ") ;

    scanf("%f" , &fValue) ;

    DisplayClass(fValue) ;

    return 0 ;
}
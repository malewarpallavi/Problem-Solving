////////////////////////////////////////////////////
//                                                //
//  File name :     Program1.c                    //
//  Description :   Used to Calculate Percentage  //
//  Author :        Pallavi Omprakash Malewar     //
//  Date :          28/04/2025                    //
//                                                //
////////////////////////////////////////////////////

#include<stdio.h>

float CalculatePercentage(int iTotalMarks , int iObtainedMarks)
{
    float fPercentageValue = 0.0f;

    fPercentageValue = ((float)iObtainedMarks / (float)iTotalMarks) * 100;

    return fPercentageValue;

}


int main()
{
    int iTotal = 0;
    int iObtained = 0;

    float fPercentage = 0.0f;

    printf("Enter your Total Marks : ");
    scanf("%d" , &iTotal);

    printf("Enter your Obtained Marks : ");
    scanf("%d" , &iObtained);

    fPercentage = CalculatePercentage(iTotal , iObtained);
    
    printf("Percentage is : %.2f\n" , fPercentage);

    return 0;
}
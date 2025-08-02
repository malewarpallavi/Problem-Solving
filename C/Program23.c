////////////////////////////////////////////////////////////////////////////////////
//                                                                                //
//  File name :     Program23.c                                                   //
//  Description :   Used to print digits from given number in reverse order       //
//  Author :        Pallavi Omprakash Malewar                                     //
//  Date :          19/07/2025                                                    //
//                                                                                //
////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void DisplayDigits(int iNumber)
{
    int iDigit = 0 ;

    while(iNumber != 0)
    {
        iDigit = iNumber % 10 ;
        iNumber = iNumber / 10 ;
        printf("%d\n" , iDigit) ;
    }
}


int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d" , &iValue);

    DisplayDigits(iValue);

    return 0;

}
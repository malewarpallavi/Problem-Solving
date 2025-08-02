/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 //
// File name    : Program89.c                                                                      //
// Description  : Display a Number in Decimal, Octal, and Hexadecimal Formats                      //
// Author       : Pallavi Omprakash Malewar                                                        //
// Date         : 31/07/2025                                                                       //
//                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d" , &iValue);

    printf("Number of Decimal Format : %d\n" , iValue);
    printf("Number in Octal Format : %o\n" , iValue);
    printf("Number of HexaDecimal Format : %x\n" , iValue);
    
    return 0;
}
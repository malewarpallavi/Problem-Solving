////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                //
//  File name :     Program67.c                                                                                   //
//  Description :   Program to accept string from user & count capital,small letters present in given string      //
//  Author :        Pallavi Omprakash Malewar                                                                     //
//  Date :          27/06/2025                                                                                    //
//                                                                                                                //  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void CountCapitalSmallDigit(char *str)
{
    int iCountCap = 0 , iCountSmall = 0 , iCountDigit = 0 ;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCap++;
        }
        else if((*str >= '0') && (*str <= '9'))
        {
            iCountDigit++;
        }
        str++;
    }
    printf("Number of Capital Characters are : %d\n" , iCountCap);
    printf("Number of Small Characters are : %d\n" , iCountSmall);
    printf("Number of Digits are : %d\n" , iCountDigit);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s" , Arr);

    CountCapitalSmallDigit(Arr);

    return 0;
}
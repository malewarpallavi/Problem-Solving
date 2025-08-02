///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  File name :     Program70.c                                              //
//  Description :   Program to accept string from user & toggle it           //
//  Author :        Pallavi Omprakash Malewar                                //
//  Date :          27/06/2025                                               //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////


// Input : InDiA
// Output : iNdIa


#include<stdio.h>

void strtoggleX(char *str)
{
    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s" , Arr);

    strtoggleX(Arr);

    printf("Updated String : %s\n" , Arr);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                //
//  File name :     Program57.c                                                                                   //
//  Description :   Program to accept string from user & display it's each character individually                 //
//  Author :        Pallavi Omprakash Malewar                                                                     //
//  Date :          27/06/2025                                                                                    //
//                                                                                                                //  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(char *str)
{
    while(*str != '\0')
    {
        printf("%c\n" , *str);
        str++;
    }
}

int main()
{
    char Arr[50];

    printf("Enter Your Name : ");
    scanf("%[^'\n']s" , Arr);

    Display(Arr);

    return 0;
}


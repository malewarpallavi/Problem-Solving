////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                //
//  File name :     Program56.c                                                                                   //
//  Description :   Program to accept string from user and display it on screen without excluding whitespace      //
//  Author :        Pallavi Omprakash Malewar                                                                     //
//  Date :          27/06/2025                                                                                    //
//                                                                                                                //  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(char *str)
{
    printf("Your Name is : %s\n" , str);
}

int main()
{
    char Arr[50];

    printf("Enter Your Name : ");
    scanf("%[^'\n']s" , Arr);

    Display(Arr);

    return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                //
//  File name :     Program61.c                                                                                   //
//  Description :   Program to accept string from user & display each character on new line                       //
//  Author :        Pallavi Omprakash Malewar                                                                     //
//  Date :          27/06/2025                                                                                    //
//                                                                                                                //  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>

void Display(char str[])
{
    for( ; *str != '\0' ; str++)
    {
        printf("%c\n" , *str);
    }
}


int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : ");
    scanf("%[^'\n']s" , Arr);

    Display(Arr);

    return 0;
}
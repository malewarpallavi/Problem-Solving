////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                //
//  File name :     Program62.c                                                                                   //
//  Description :   Program to accept string from user & display each character on new line                       //
//  Author :        Pallavi Omprakash Malewar                                                                     //
//  Date :          27/06/2025                                                                                    //
//                                                                                                                //  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(char str[])
{
    int i = 0;

    for(i = 0  ; str[i] != '\0' ; i++)
    {
        printf("%c\n" , str[i]);
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s" , Arr);

    Display(Arr);

    return 0;
}
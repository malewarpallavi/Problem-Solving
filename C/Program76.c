///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  File name :     Program76.c                                              //
//  Description :   Program to accept string  & Display reverse              //
//  Author :        Pallavi Omprakash Malewar                                //
//  Date :          27/06/2025                                               //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void ReverseDisplay(char *str)
{
    int iCount = 0 ;
    char *start = NULL;

    start = str;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    
    str--;
    

    while(str >= start)
    {
        printf("%c" , *str);
        str--;
    }
    
    printf("\n");
    
}


int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : ");
    scanf("%[^'\n']s" , Arr);
    
    ReverseDisplay(Arr);

    return 0;
}
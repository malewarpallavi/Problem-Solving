///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  File name :     Program78.c                                              //
//  Description :   Program to accept string  & Display reverse              //
//  Author :        Pallavi Omprakash Malewar                                //
//  Date :          27/06/2025                                               //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////



#include<stdio.h>

void StrRevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')         // Time Complexity O(N)
    {
        end++;
    }
    end--;

    while(start <= end)         // Time Complexity O(N/2)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}


int main()
{
    char Arr[50] = {'\0'};
    
    printf("Enter String : ");
    scanf("%[^'\n']s" , Arr);

    StrRevX(Arr);

    printf("String after revesal : %s\n" , Arr);

    return 0;
}

// Time Complexity o(N + N/2)
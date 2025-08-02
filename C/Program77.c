///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  File name :     Program77.c                                              //
//  Description :   Program to accept string  & Display reverse              //
//  Author :        Pallavi Omprakash Malewar                                //
//  Date :          27/06/2025                                               //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void ReverseDisplay(char *str)
{
    int iCount = 0 , iCnt = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }

    str--;

    for(iCnt = iCount ; iCnt > 0 ; iCnt-- , str--)
    {
        printf("%c" , *str);
    }
    printf("\n");
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s" , Arr);

    ReverseDisplay(Arr);

    return 0;
}
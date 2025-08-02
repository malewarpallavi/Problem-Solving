////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                //
//  File name :     Program69.c                                                                                   //
//  Description :   Program to accept string from user & replace 'a' by 'A'                                       //
//  Author :        Pallavi Omprakash Malewar                                                                     //
//  Date :          27/06/2025                                                                                    //
//                                                                                                                //  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// Input : India
// Output : IndiA

// Input : anaconda
// Output : AnAcondA


#include<stdio.h>

void ChangeA(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if(*str == 'a')
        {
            *str = 'A';
        }
        str++;
    }
    
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s" , Arr);

    ChangeA(Arr);

    printf("Updated String %s\n" , Arr);

    return 0;
}
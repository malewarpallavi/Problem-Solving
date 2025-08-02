////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                //
//  File name :     Program63.c                                                                                   //
//  Description :   Program to accept string from user & count length of given string                            //
//  Author :        Pallavi Omprakash Malewar                                                                     //
//  Date :          27/06/2025                                                                                    //
//                                                                                                                //  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int strlenX(char *str)
{
    int iCount = 0 ;
    
    if(str == NULL)
    {
        return -1;
    }
    
    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s" , Arr);

    iRet = strlenX(Arr);

    printf("Number of Characters are : %d\n" , iRet);

    return 0;
}
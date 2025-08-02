////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                //
//  File name :     Program74.c                                                                                   //
//  Description :   Program to accept String & Character from User & Chekc if it is present in it or not          //
//  Author :        Pallavi Omprakash Malewar                                                                     //
//  Date :          27/06/2025                                                                                    //
//                                                                                                                //  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
#include<stdbool.h>

bool CheckCharacter(char *str , char ch)
{
    while(*str != '\0')
    {
        if(*str == ch )
        {
            break;
        }
        str++;
    }
    
    if(*str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char Arr[50] = {'\0'} , cValue = '\0';
    bool bRet = false;

    printf("Enter String : \n");
    scanf("%[^'\n']s" , Arr);

    printf("Enter the Character : \n");
    scanf(" %c" , &cValue);

    bRet = CheckCharacter(Arr , cValue);

    if(bRet == true)
    {
        printf("%c is present in %s\n" , cValue , Arr); 
    }
    else
    {
        printf("%c is not present in %s\n" , cValue , Arr); 
    }

    return 0;
}
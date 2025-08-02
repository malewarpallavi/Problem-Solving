////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                //
//  File name :     Program73.c                                                                                   //
//  Description :   Program to accept String & Character from User & Chekc if it is present in it or not          //
//  Author :        Pallavi Omprakash Malewar                                                                     //
//  Date :          27/06/2025                                                                                    //
//                                                                                                                //  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

bool CheckCharacter(char *str , char ch)
{

    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }

    return bFlag;

}

int main()
{

    char Arr[50] = {'\0'};
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the String : ");
    scanf("%[^'\n']s" , Arr);

    printf("Enter the Character : ");
    scanf(" %c" , &cValue);

    bRet = CheckCharacter(Arr , cValue);

    if(bRet == true)
    {
        printf("%c is Present in the given String.\n");
    }
    else 
    {
        printf("%c is not present in the given String.\n");
    }

    return 0;
}


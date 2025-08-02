/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 //
// File name    : Program90.c                                                                      //
// Description  : Display a Number in Decimal, Octal, and Hexadecimal Formats                      //
// Author       : Pallavi Omprakash Malewar                                                        //
// Date         : 31/07/2025                                                                       //
//                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<ctype.h>

#define BUFFER_SIZE 1024

int main()
{
    int fd = 0 , iRet = 0 , iWordCount = 0 , iLineCount = 0 , inWord = 0;
    char ch = {'\0'};
    char Fname[20] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter the File Name to Open : ");
    scanf("%s" , Fname);

    fd = open(Fname , O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the File.\n");
        return -1;
    }

    while((iRet = read(fd , Buffer , BUFFER_SIZE)) > 0)
    {
        for(int i = 0 ; i < iRet ; i++)
        {
            char ch = Buffer[i];

            if(ch == '\n')
            {
                iLineCount++;
            }

            if(isspace(ch))
            {
                if(inWord)
                {
                    iWordCount++;
                    inWord = 0;
                }
            }
            else
            {
                inWord = 1;
            }
        }
        memset(Buffer , '\0' , BUFFER_SIZE);
    }

    if(inWord)
    {
        iWordCount++;
    }

    printf("Total Words in File : %d\n" , iWordCount);
    printf("TOtal Lines in File : %d\n" , iLineCount);

    close(fd);

    return 0;
}
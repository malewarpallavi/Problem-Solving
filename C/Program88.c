///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                   //
// File name    : Program88.c                                                                                        //
// Description  : Program to read and display file contents character by character using system calls                //
// Author       : Pallavi Omprakash Malewar                                                                          //
// Date         : 31/07/2025                                                                                         //
//                                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024

int main()
{
    int fd = 0 , iRet = 0 , iCount = 0 , iCapCount = 0;
    char Fname[20] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter the name of file you want to open : ");
    scanf("%s" , Fname);

    fd = open(Fname , O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is Successfully opened with fd : %d\n" , fd);

        while((iRet = read(fd , Buffer , BUFFER_SIZE)) != 0)
        {
            for(iCount = 0 ; iCount < iRet ; iCount++)
            {
                if((Buffer[iCount] >= 'A') && (Buffer[iCount] <= 'Z'))
                {
                    iCapCount++;
                }
            }
            memset(Buffer , '\0' , BUFFER_SIZE);
        }

        printf("Number of capital Chaarcters are : %d\n" , iCapCount);

        close(fd);
    }

    return 0;
}
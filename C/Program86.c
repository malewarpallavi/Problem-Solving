///////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
// File name    : Program86.c                                                                        //
// Description  : Program to open a file, read data using read system call, and display its content  //
// Author       : Pallavi Omprakash Malewar                                                          //
// Date         : 31/07/2025                                                                         //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024

int main()
{
    int fd = 0 , iRet = 0;
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
            // printf("%s" , Buffer);
            write(1 , Buffer , iRet);
            memset(Buffer , '\0' , BUFFER_SIZE);
        }

        close(fd);
    }

    return 0;
}
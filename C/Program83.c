///////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
// File name    : Program83.c                                                                        //
// Description  : Program to open a file, write data, and display its file descriptor                //
// Author       : Pallavi Omprakash Malewar                                                          //
// Date         : 31/07/2025                                                                         //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd = 0 , iRet = 0;
    char Fname[20] = {'\0'};
    char Buffer[] = "India is my country";

    printf("Enter the name of file you want to open : ");
    scanf("%s" , Fname);

    fd = open(Fname , O_CREAT | O_WRONLY | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is Successfully opened with fd : %d\n" , fd);

        iRet = write(fd , Buffer , strlen(Buffer));

        printf("%d bytes gets written successfully\n" , iRet);

        close(fd);
    }

    return 0;
}
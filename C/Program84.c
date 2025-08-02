///////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
// File name    : Program84.c                                                                        //
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

int main()
{
    int fd = 0 , iRet = 0;
    char Fname[20] = {'\0'};
    char Buffer[50] = {'\0'};

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

        iRet = read(fd , Buffer , 11);
        printf("%d bytes gets read successfully\n" , iRet);
        printf("Data from file is : %s\n" , Buffer);

        close(fd);

        fd = open(Fname , O_RDONLY);

        iRet = read(fd , Buffer , 20);
        printf("%d bytes gets read successfully\n" , Buffer);
        printf("Data form file is : %s\n" , Buffer);

        close(fd);
    }

    return 0;
}
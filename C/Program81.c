////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                    //
//  File name :     Program81.c                                                                       //
//  Description :   Program to create a new file using system call and display its file descriptor    //
//  Author :        Pallavi Omprakash Malewar                                                         //
//  Date :          31/07/2025                                                                        //
//                                                                                                    //
////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};

    printf("Enter the name of file you want to create : ");
    scanf("%s" , Fname);

    fd = creat(Fname , 0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
        return -1;
    }

    printf("File is Successfully created with FD %d\n" , fd);
    fflush(stdout);

    return 0;
}
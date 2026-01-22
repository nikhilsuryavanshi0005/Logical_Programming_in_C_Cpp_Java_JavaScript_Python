#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

   
    fd = open("PPA.txt",O_RDWR);

    if(fd == -1)
    {
        printf("Unable to Open the File\n");
    }
    else
    {
        printf("File get Successfully Opened with fd:%d\n",fd);
        write(fd,"Jay Ganesh",10);

        close(fd);
    }

    return 0;
}
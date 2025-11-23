#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char filename[20];
    printf("Enter the File Name that you want to open :\n");
    scanf("%s",filename);

    fd = open(filename,O_RDWR);

    if(fd ==-1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File successfully opened with fd :%d\n",fd);
    }

    close(fd);
   
    return 0;
}
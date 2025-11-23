#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = creat("PPA.txt",0777);

    if(fd ==-1)
    {
        printf("Unable to Create File\n");
    }
    else
    {
        printf("File Successfully Created with fd :%d\n",fd);
    }
    return 0;
}
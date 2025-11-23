#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char filename[20];
    printf("Enter the File Name that you want to create :\n");
    scanf("%s",filename);

    fd = creat(filename,0777);

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
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0, iRet = 0;
   
    char fname[100] = {'\0'};

    printf("Enter the name of File\n");
    scanf("%s",fname);

    fd = open(fname,O_RDWR);

    if(fd != -1)
    {
        printf("File Successfully Open \n");

        close(fd);
    }
    else
    {
        printf("There is No Such File\n");
    }

    return 0;
}
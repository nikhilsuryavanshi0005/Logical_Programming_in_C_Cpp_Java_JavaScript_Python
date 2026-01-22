#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    int iRet = 0;

   
    fd = open("January.txt",O_RDWR | O_CREAT,0777);

    if(fd == -1)
    {
        printf("Unable to Open the File\n");
    }
    else
    {
        printf("File get Successfully Opened with fd:%d\n",fd);
        iRet = write(fd,"Jay Ganesh",3);

        printf("%d Bytes get sucessfully written into the file\n",iRet);

        close(fd);
    }

    return 0;
}
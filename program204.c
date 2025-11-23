#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    int iRet = 0;

    char Filename[20];
    char data[50];
    printf("Enter the name of file :\n");
    scanf("%s",Filename);

    fd = open(Filename,O_RDWR);
    if(fd ==-1)
    {
        printf("Unable to open\n");
        return -1;
    }

    iRet = read(fd,data,5);
    printf("%d bytes get Successfully read\n",iRet);

    close(fd);
   
    return 0;
}
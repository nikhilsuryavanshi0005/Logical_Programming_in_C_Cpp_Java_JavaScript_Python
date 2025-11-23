#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    int iRet = 0;

    char Filename[20];
    char data[] = "India is my country";

    printf("Enter the name of file :\n");
    scanf("%s",Filename);

    fd = open(Filename,O_RDWR);
    if(fd ==-1)
    {
        printf("Unable to open\n");
        return -1;
    }

    iRet = write(fd,data,11);
    printf("%d bytes get Successfully written\n",iRet);

    close(fd);
   
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    char Buffer[100] = {'\0'};

    char arr[10] ={'\0'};
    
    fd = open("JanuaryX.txt",O_RDONLY);

    if(fd!= -1)
    {
        printf("File gets Opened Successfully opened with%d\n",fd);
        iRet = read(fd,Buffer,11);

        printf("Data from file is %s",Buffer);
        printf("Return value of read is %d",iRet);

        iRet = read(fd,arr,10);

        printf("Data from file is %s",arr);
        printf("Return value of read is %d",iRet);

        close(fd);
    }

    

    return 0;
}
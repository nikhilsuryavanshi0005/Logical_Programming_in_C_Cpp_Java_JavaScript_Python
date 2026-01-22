#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0, iRet = 0;
   
    char fname[100] = {'\0'};
    char Buffer[100] = {'\0'};

    printf("Enter the name of File\n");
    scanf("%s",fname);

    fd = open(fname,O_RDWR);

    if(fd != -1)
    {
        printf("File Successfully Open \n");

        printf("Data from file is :\n");
        
        while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
        {
            // write(1,Buffer,iRet);
            printf("iRet is :%d\n",iRet);
        }
        printf("\n");
    }
    else
    {
        printf("There is No Such File\n");
    }

    return 0;
 }
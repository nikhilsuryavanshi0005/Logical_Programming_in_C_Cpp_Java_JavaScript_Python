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

        int iCnt =0;
        int iCount = 0;
        
        while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
        {
            
            for(iCnt = 0; iCnt <iRet;iCnt++)
            {
                if(Buffer[iCnt] == 'a')
                {
                    iCount++;
                }

            }
           
            
        }
        printf("Count of Letter is :%d\n",iCount);
       
       close(fd);

    }
    else
    {
        printf("There is No Such File\n");
    }

    return 0;
 }
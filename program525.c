#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fdsrc = 0,fddest = 0;

    char fsource[100] = {'\0'};

    char fdest[100] = {'\0'};

    printf("Enter the Name of Source File :\n");
    scanf("%s",fsource);


    printf("Enter the Name of Destination File :\n");
    scanf(" %s",fdest);

    fdsrc = open(fsource,O_RDONLY);

    if(fdsrc == -1)
    {
        printf("Unable to open source file\n");
        return -1;
    }
    

    fddest = creat(fdest,0777);

    if(fddest == -1)
    {
        printf("Unable to create destination file\n");
        return -1;
    }

    return 0;
}
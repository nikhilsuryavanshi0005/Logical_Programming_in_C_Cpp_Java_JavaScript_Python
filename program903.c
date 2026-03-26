#include<stdio.h>
#include<unistd.h>

int main()
{
    printf("Inside my exe process with PID %d",getpid());
    return 0;
}
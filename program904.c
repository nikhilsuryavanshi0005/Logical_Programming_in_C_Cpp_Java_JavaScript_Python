#include<stdio.h>
#include<unistd.h>

int main()
{
    printf("Inside my exe process with PID %d",getpid());

    while(1)
    {}

    return 0;
}
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    printf(" Home Directory :%s \n",getenv("HOME"));
    printf(" Shel used : \n %s",getenv("SHEL"));

    return 0;
}
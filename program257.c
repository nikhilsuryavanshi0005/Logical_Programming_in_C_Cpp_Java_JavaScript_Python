#include<stdio.h>

void strcpyX(char *src,char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[50] ={'\0'};
    char Brr[50] = {'\0'};

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr,Brr);

    printf("Copied String is :%s\n",Brr);

    return 0;
}
#include<stdio.h>

void strRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';
    while(*end != '\0')
    {
        end++;   
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    
}


int main()
{
    char Arr[50] ={'\0'};
 
    printf("Enter   String :\n");
    scanf("%[^'\n']s",Arr);

    strRevX(Arr);  

    printf("Updated String is :%s\n",Arr);

    return 0;
}

#include<iostream>
#include<stdio.h>

using namespace std;

int strlenx(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    
    }
    return iCount;
}
int main()
{
   char Arr[50] = {'\0'};
   int iRet = 0;


   printf("Enter the String :\n");
   scanf("%[^'\n']s",Arr);

   iRet = strlen(Arr);

   printf("%d\n",iRet);
   
    return 0;
}

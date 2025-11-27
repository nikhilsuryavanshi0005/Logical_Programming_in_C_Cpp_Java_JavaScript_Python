
#include<stdio.h>

int CountOcurrance(char str[],char ch)
{
    int iCount = 0;

   while(*str!='\0')
   {
    if(*str == ch)
    {
        iCount++;
    }
    str++; 
   }

   return iCount;
}

int main()
{
    char Arr[50]= {'\0'};
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    iRet =CountOcurrance(Arr,'d');

    printf("Count of Ocurrances are :%d\n",iRet);

    return 0;
}
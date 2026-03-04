

#include<iostream>
#include<stdio.h>

using namespace std;

int CapitalCount(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if((*str >= 'A') &&(*str <= 'Z'))
        {
             iCount++;
        }
       
        str++;
        CapitalCount(str);
    
    }
    return iCount;
}
int main()
{
   char Arr[50] = {'\0'};
   int iRet = 0;


   printf("Enter the String :\n");
   scanf("%[^'\n']s",Arr);

   iRet = CapitalCount(Arr);

   printf("%d\n",iRet);
   
    return 0;
}

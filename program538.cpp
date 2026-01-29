#include<stdio.h>

int main()
{
    char str[80];
    char Command[4][20];
    int iRet;

    int No1 = 0;
    int No2 = 0;

    printf("Enter Two Numbers :\n");
    iRet = scanf("%d%d",&No1,&No2);

    printf("First Number :%d\n",No1);
    printf("Second Number :%d\n",No2);

    printf("Return Value of Scanf is :%d\n",iRet);

    

    return 0;
}
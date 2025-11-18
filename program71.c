#include<stdio.h>

int SumofDigits(int iNo)
{
    if(iNo < 0)
        {
            iNo = -iNo;
        }
int iSum = 0;
    int iDigit = 0;

    
    while(iNo!= 0)
    {
        iDigit = iNo%10;
        iNo = iNo/10;
        iSum = iSum + iDigit;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = SumofDigits(iValue);

    printf("Sum of Digits is :%d\n",iRet);
    
    return 0;
}
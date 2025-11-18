#include<stdio.h>
#include<stdbool.h>
   
bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = false;
    

    if(iNo < 0)
    {
        iNo = -iNo;

    }
    for(iCnt = 2; iCnt<= (iNo/2); iCnt++)
    {
        if((iNo%iCnt)== 0)
        {
            bFlag = true;
            break;                //Optimization
        }
    }

    return bFlag;

}

int main()
{
    int iValue = 0;
    bool bRet = true;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("It is Prime Number%d",bRet);
    }
    else
    {
        printf("It is Not Prime Number%d",bRet);
    }

    
    
    return 0;
}

/*
//
// Time Complexity : For Prime = N/2
//
//Time Complexity : For Non -Prime = 1 or 2
//
*/
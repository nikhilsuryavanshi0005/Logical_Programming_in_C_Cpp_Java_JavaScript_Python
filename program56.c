#include<stdio.h>
#include<stdbool.h>
   
bool CheckPrime(int iNo)
{
    int iCnt = 0;
    

    if(iNo < 0)
    {
        iNo = -iNo;

    }
    for(iCnt = 2; iCnt<= (iNo/2); iCnt++)
    {
        if((iNo%iCnt)== 0)
        {
            
            break;                //Optimization
        }
    }

    if(iCnt>(iNo/2))
    {
        return true;            // no factors
    }
    else
    {
        return false;           // atleast one Factor
    }

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is PrimeNumber",iValue);
    }
    else
    {
        printf("%d is Not PrimeNumber",iValue);
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
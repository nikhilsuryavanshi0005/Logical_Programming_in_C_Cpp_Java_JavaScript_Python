#include<stdio.h>
 ////////////////////////////////////////////////////////////////////
 //
 //Except the Python all other language return one one value from the function
 //
 ////////////////////////////////////////////////////////////////////

void CountFactorsNonFactors(int iNo)
{
    int iCnt = 0;
    int Factor_iFrequency = 0;
    int Non_Factor_iFrequency = 0;

    if(iNo < 0)
    {
        iNo = -iNo;

    }
    for(iCnt = 1; iCnt< iNo; iCnt++)
    {
        if((iNo%iCnt)!= 0)
        {
            Factor_iFrequency++;
        }
        else
        {
            Non_Factor_iFrequency++;
        }
    }

    printf("Number of Factors are :%d",Factor_iFrequency);
    printf("Number of Non Factors are :%d",Non_Factor_iFrequency);


}



int main()
{
    int iValue = 0;
    

    printf("Enter the Number :");
    scanf("%d",&iValue);

    CountFactorsNonFactors(&iValue);
    
    return 0;
}
#include<stdio.h>
#include<stdlib.h>


typedef int * IPTR;

int FrequencyClaculate(int Arr[],int iSize,int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt =0; iCnt <iSize; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iLength = 0;
    int iCnt = 0;
    int iRet = 0; 
    IPTR iPtr = NULL;
    int iValue = 0;

    printf("Enter the Number of Elements :\n");
    scanf("%d",&iLength);

    //Step1 : Allocate the Memory
    iPtr = (IPTR)malloc(iLength*sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to Allocate the Memory");
        return -1;

    }

    printf("Enter the Values :\n");

    for(iCnt =0; iCnt<iLength;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    printf("Enter the Number to Calculate Frequency:\n");
    scanf("%d",&iValue);

    //Step2 : use the Memory;

    iRet = FrequencyClaculate(iPtr,iLength,iValue);

    printf("Frequency of iValue is :%d\n",iRet);

    //Step3 : Free the Memory

    free(iPtr);


    return 0;
}
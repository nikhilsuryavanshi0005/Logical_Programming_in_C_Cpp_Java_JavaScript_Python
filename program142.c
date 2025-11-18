#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR;

bool LinearSearch(int Arr[],int iSize,int iNo)
{
    int iCnt = 0;
    

    for(iCnt =0; iCnt <iSize; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            
            break;
        }
        
    }
                    
    
    return (iCnt != iSize);     
    
}

int main()
{
    int iLength = 0;
    int iCnt = 0;
    bool bRet = false; 
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

    printf("Enter the Number to Search:\n");
    scanf("%d",&iValue);

    //Step2 : use the Memory;

    bRet = LinearSearch(iPtr,iLength,iValue);

    if(bRet == true)
    {
        printf("%d is present in Array",iValue);
    }
    else
    {
        printf("%d is not present in Array",iValue);
    }

    //Step3 : Free the Memory

    free(iPtr);


    return 0;
}

#include<stdio.h>
#include<stdlib.h>

int Average(int Arr[], int iSize)
{
    
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt <iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];         
        
    }
    return (iSum/iSize);  //Issue;
}

int main()
{
    int iLength = 0;
    int iCnt = 0;
    int *ptr = NULL;
    float fRet = 0.0f;

    printf("Enter Number of Elements :");
    scanf("%d",&iLength);

    ptr = (int*)malloc(iLength *sizeof(int));
    if(NULL == ptr)          //Industrial way of coding incase of if; 
    {
        printf("Unable to Allocate Memory");
        return -1;
    }

    printf("Enter the Elements :\n");
    
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    fRet = Average(ptr,iLength);

    printf("Average is :%f",fRet); 

    free(ptr);

    return 0;
}
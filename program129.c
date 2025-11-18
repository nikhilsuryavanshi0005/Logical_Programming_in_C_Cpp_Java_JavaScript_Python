
#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt <iSize; iCnt++)
    {
        if(Arr[iCnt]%2==0);
        {
            iCount++;
        }    
        return iCount;
    }
}

int main()
{
    int iLength = 0;
    int iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

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

    iRet = CountEven(ptr,iLength);

    printf("Number of even elements are :%d",iRet); 

    free(ptr);

    return 0;
}
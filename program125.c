
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    
    int iCnt = 0;

    for(iCnt = 0; iCnt <iSize; iCnt++)
    {
        
        printf("%d\n",Arr[iCnt]);
        
    }
}

int main()
{
    int iLength = 0;
    int iCnt = 0;
    int *ptr = NULL;

    printf("Enter Number of Elements :");
    scanf("%d",&iLength);

    ptr = (int*)malloc(iLength *sizeof(int));
    if(ptr = NULL)          //Major Issue
    {
        printf("Unable to Allocate Memory");
        return -1;
    }

    printf("Enter the Elements :\n");
    
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iLength);

    free(ptr);

    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iLength = 0;
    int iCnt = 0;
    int *iPtr = NULL;

    printf("Enter the Number of Elements :\n");
    scanf("%d",&iLength);

    //Step1 : Allocate the Memory
    iPtr = (int*)malloc(iLength*sizeof(int));

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

    //Step2 : use the Memory;

    //Call to function which contains the business logic;
    //Fun(iPtr,iLength)

    //Step3 : Free the Memory

    free(iPtr);


    return 0;
}
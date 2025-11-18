#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int Minimium(int Arr[],int iSize)
{
              
    int iCnt = 0;
    int iMin =0;
    for(iMin = Arr[0],iCnt = 0; iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;

}

int main()
{
    int iLength = 0;
    int iCnt = 0;
    int iRet = 0; 
    IPTR iPtr = NULL;
    

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

    
    //Step2 : use the Memory;

    iRet = Minimium(iPtr,iLength);

    printf("The Minimium Number is :%d\n",iRet);

    //Step3 : Free the Memory

    free(iPtr);


    return 0;
}
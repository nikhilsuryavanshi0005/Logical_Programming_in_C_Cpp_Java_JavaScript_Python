#include<stdio.h>
#include<stdlib.h>


typedef int * IPTR;

int Maximium(int Arr[],int iSize)
{
    int iMax = 0;           ///Enable to handle negative inputs;
    int iCnt = 0;
    for(iCnt = 0; iCnt< iSize;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;

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

    iRet = Maximium(iPtr,iLength);

    printf("The Maximium Number is :%d\n",iRet);

    //Step3 : Free the Memory

    free(iPtr);


    return 0;
}
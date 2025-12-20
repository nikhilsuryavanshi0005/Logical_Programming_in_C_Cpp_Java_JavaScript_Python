function CheckPerfect(iNo)
{
    
    let iCnt = 0;
    let iSum = 0;
    for(iCnt = 1; iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt == 0)
        {
            iSum = iSum + iCnt;
        }

        if(iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

function main()
{
    

    let iValue = 6;
    let bRet = false;

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        console.log("is Perfect Number");
    }
    else
    {
        console.log("is  not Perfect Number");
    }
    
}

main();
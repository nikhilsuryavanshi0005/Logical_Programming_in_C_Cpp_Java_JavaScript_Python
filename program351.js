function CountDigit(iNo)
{
    let iCount = 0;
    let iDigit = 0;

    while(iNo!=0)
    {
        iDigit = iNo %10;
        iCount++;
        iNo = Math.floor(iNo/10);   

    }
    return iCount;
    
   
}

function main()
{
    let iValue = 721;
    let iRet = 0;

    iRet = CountDigit(iValue);

    console.log(iValue+" it contains " ,iRet + " Digits")
    
}

main();
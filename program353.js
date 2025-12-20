function SumDigit(iNo)
{
    let iSum = 0;
    let iDigit = 0;

    while(iNo!=0)
    {
        iDigit = iNo %10;
        iSum = iSum+iDigit;
        iNo = Math.floor(iNo/10);   

    }
    return iSum;
    
   
}

function main()
{
    let iValue = 721965;
    let iRet = 0;

    iRet = SumDigit(iValue);

    console.log("Sum all of Digits :",iRet);
    
}

main();
function Factorial(iNo)
{
    
    let Fact = 1;
    while(iNo!= 0)
    {
        Fact = Fact * iNo;
        iNo--;
    }
    return Fact;
}

function main()
{
    let iRet = 0;

    let iValue = 10;

    iRet = Factorial(iValue);

    console.log('Factorial is of $(iValue) is $(iRet) :',iRet);
}

main();
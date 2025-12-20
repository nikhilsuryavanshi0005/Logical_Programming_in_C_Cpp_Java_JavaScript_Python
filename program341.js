function CheckEvenOdd(iNo)
{
    if(iNo%2==0)
    {
        console.log("Number is Even");
    }
    else
    {
        console.log("Number is Odd");
    }
}

function main()
{
    let iValue = 10;

    CheckEvenOdd(iValue);
}

main();
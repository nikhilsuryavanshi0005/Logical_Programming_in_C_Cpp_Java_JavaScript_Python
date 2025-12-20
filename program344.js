function DisplayFactors(iNo)
{
    
    let iCnt = 0;
    for(iCnt = 1; iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt == 0)
        {
            console.log(iCnt);
        }
    }
}

function main()
{
    

    let iValue = 20;

    DisplayFactors(iValue);

    
}

main();
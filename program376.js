class Arithmatic
{
    constructor(A,B)
    {
        this.No1 = A;
        this.No2 = B;
    }

    Addition()
    {
        
        return this.No1 + this.No2;
    }

    Substraction()
    {
        
        return this.No1 - this.No2;
    }   

}

function main()
{
    let iRet = 0;
    let obj1 = new Arithmatic(10,11);
    iRet =obj1.Addition();
    console.log("Addition is :",iRet);

    iRet = obj1.Substraction();
    console.log("Addition is :",iRet);
}
main();
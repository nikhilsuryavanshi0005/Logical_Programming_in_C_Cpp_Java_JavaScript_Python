class Demo          //Not Allowed Two Constructor of differnt type in JS
{

    constructor()   //Defualt Constructor
    {
        this.No1 = 0;
        this.No2 = 0;
        console.log("Inside Constructor");
    }

     constructor(A,B)   //Parametrized Constructor
    {
        this.No1 = A;
        this.No2 = B;
        console.log("Inside Constructor");
    }
}


function main()
{
   let obj1 = new Demo();
   let obj2 = new Demo(10,20);
   
}

main();
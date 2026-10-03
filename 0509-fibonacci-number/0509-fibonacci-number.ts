function findfib(n:number):number{
    if(n==0||n==1){
        return n;
    }
    return findfib(n-1)+findfib(n-2);
}

function fib(n: number): number {
   return  findfib(n);
};
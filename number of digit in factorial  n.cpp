n!= 1* 2 *3 *4..... n
taking log both side we get
log(n!) = log(1*2*3*4....n)
log(n!)=log1+log2+ log3.... logn;

log(n!) will contains the number of digit leess one (eg 32.333)

eg :n=5 n!=120

taking log on both side we will get the number of digit in 120

log(5!)=log(1*2*3*4*5);
using log property logmn=log m+log n;


int digitsInFactorial(int N)
{
    //Your code here
    double temp=0;
    if(N<=1)
     return 1;
    
    for(int i=2;i<=N;i++)
    {
        temp=temp+log10(i);   //here temp is acting as log(n!) ,log(n) mean number of digit one less in number n,also log(n!)                   
                             // mean number of digit in n! (number of digit in n!-1 actually) 
 }
   return floor(temp)+1;   .// here we added the last digit 
   
   eg : log(100) ,2 one digit less, so we have to add one extra 
   eg 2: log(110) ,2.02 aprox  .. now take its floor value i.e 2 and add one to it.
    
}

Given a positive integer value N. The task is to find how many numbers less than or equal to N have numbers of divisors exactly 
equal to 3.
Input :
https://practice.geeksforgeeks.org/problems/3-divisors/0#
3
6
10
30
Output :
1
2
3

note :  The trick is that only nos whose square root is prime have only 3 divisors .
There are 2 points to learn for this question
1) square of prime number has exactly 3 divisors including 1 and itself and other must be a prime number as divisor.
2) How to get all prime numbers less than a number efficiently ie most efficiently using sieve of Eratosthenes algorithm.



int seiv(int n)
{
    int sv[n+1]={0};
    sv[0]=1;
    sv[1]=1;
    for(long long int i=2;i<=sqrt(n);i++)
    {
        if(sv[i]==0)
        {
            for(long long int j=2*i;j<=n;j=j+i)
            {
                sv[j]=1;
            }
        }
    }
 long long int c=0;
  for(long long int i=0;i<=n;i++)
  {
      if(sv[i]==0)
        c++;
        
  //  cout<<sv[i]<<" ";
  }
  
    
 return c;    
}

long long int exactly3Divisors(long long int N)
{
    //Your code here
    
    int x=sqrt(N);
    int temp=seiv(x);  //now we will find 1,to sqrt(N) how many number are prime that will be our count.
    return temp;
}

eg . for count 0: number sqrt((1,2,3)=1 ,hence cont =0;
     case 1-for count 1 : numbers sqrt(4,5,6,7,8)=2,hence count=1,                       4,5,6,7,8) --> 2
     case -2 for count 2: number sqrt((9,10,11,12,13,14,15))=3,count=2,because till number =3 there are only 2 prime no possible (case1+case2),total count=2


Euler’s Totient Function: 

Euler’s Totient function ? (n) for an input n is the count of numbers in {1, 2, 3, …, n} that are relatively prime to n, i.e., gcd(n,i)=1 ,also called coprime
the numbers whose GCD (Greatest Common Divisor) with n is 1.

phi(1) = 1  
gcd(1, 1) is 1

phai(2) = 1
gcd(1, 2) is 1, but gcd(2, 2) is 2.

phai(3) = 2
gcd(1, 3) is 1 and gcd(2, 3) is 1

?(4) = 2
gcd(1, 4) is 1 and gcd(3, 4) is 1

?(5) = 4

code O(n);


int phi(unsigned int n) 
{ 
    unsigned int result = 1; 
    for (int i = 2; i < n; i++) 
        if (gcd(i, n) == 1) 
            result++; 
    return result; 
} 
 
// Driver program to test above function 
int main() 
{ 
    int n; 
    for (n = 1; n <= 10; n++) 
        cout << "phi("<<n<<") = " << phi(n) << endl; 
    return 0; 
} 



The above code calls gcd function O(n) times. The time complexity of the gcd function is O(h) where “h” is the number of digits in a smaller number of given two numbers. 
Therefore, an upper bound on the time complexity of the above solution is O(nLogn) [How? there can be at most Log10n digits in all numbers from 1 to n]
Below is a Better Solution. The idea is based on Euler’s product formula which states that the value of totient functions is below the product overall prime factors p of n. 



Formula : phai(n)= N[1-1/p1][1-1/p2..........[1-1/pk]

where pi is the prime factor .


complexity : o(sqrt(n) ,but it can be further reduced to the o(nlogn): using prime seive.


long long ETF(long long N){
        // code here
        
      vector<long long > v;
      long long n=N;
      for(long long i=2;i*i<=N;i++)
      {
          if(N%i==0)
          {
              while(N%i==0)
              {
                  N=N/i;
                  
              }
             v.push_back(i); 
          }
      }
      if(N!=1)
      {
          v.push_back(N);
      }
      
      long long sum=n;
 
      for(long long i=0;i<v.size();i++)
      {
         
         long long temp=sum/v[i];
          sum=temp*(v[i]-1);
       //  cout<<sum<<" ";
      
      }
        
    return sum;    
    }


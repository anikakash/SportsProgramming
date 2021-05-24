
//Need to Generate prime numbers

vector<int>prime_factor;
void primeFactorization(int n)
{
      for(int i=0; prime[i]*prime[i]<=n; i++)
      {
          if(n%prime[i]==0)
          {
              while(n%prime[i]==0)
              {
                  n/=prime[i];
                  prime_factor.pb(prime[i]); 
              }
          }
      }
    if(n>1)prime_factor.pb(n);
}
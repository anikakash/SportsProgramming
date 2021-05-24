int is_prime(ll n)
{
    ll i, root;
    if(n==2) return 1;
    if(n%2==0 || n==1) return 0;

    root = sqrt(n);
    
    for(i=3; i<=root; i = i+2)if(n%i==0)  return 0;
    
    return 1;
}
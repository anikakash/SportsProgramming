
//Big Mod
ll big_mod(ll base, ll power, ll mod)
{
    if(power==0)  return 1;
    
    else if(power%2==1) 
    {
        ll p1 = base % mod;
        ll p2 = (big_mod(base,power-1,mod))%mod;
        return (p1*p2)%mod;
    }
    else 
    {
        ll p1 = (big_mod(base,power/2,mod))%mod;
        return (p1*p1)%mod;
    }

}
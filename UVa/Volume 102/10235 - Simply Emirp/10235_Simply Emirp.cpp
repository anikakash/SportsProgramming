#include<bits/stdc++.h>
using namespace std;

int is_prime(int n);
int is_emirp(int x);

int main()
{
    int n,y;
    while(scanf("%d",&n)!=EOF)
    {
        if(1==is_prime(n)) //start check n is prime or not;
        {
            y = is_emirp(n); // start check n is emrip or not;
            if(1==is_prime(y)&& n!=y)
            {
                printf("%d is emirp.\n", n); //palindrome number is not emirp; so use n!=y;
            }
            else
            {
                printf("%d is prime.\n", n);
            }
        }
        else
        {
            printf("%d is not prime.\n", n);
        }
    }
    return 0;
}
int is_prime(int n) //checking prime;
{
    int i, root;
    if(n==2)
        return 1;
    if(n%2==0 || n==1)
        return 0;

    root = sqrt(n);
    for(i=3; i<=root; i=i+2)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int is_emirp(int x) //checking emirp by revers a number;
{
    int rev =0, div;
    while(x>0)
    {
        div = x%10;
        rev = rev*10+div;
        x = x/10;
    }
    return rev;
}

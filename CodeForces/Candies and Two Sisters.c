
#include<stdio.h>
#include<math.h>
typedef long long ll;
void solve();
int main()
{
   int T;
   scanf("%d",&T);
   while(T--)
   {
     solve();
   }
   return 0;
}
void solve(){
  ll val;
  scanf("%lld",&val);
  if(val > 2){
   val--;
   printf("%lld\n",val/2);
  }
  else printf("0\n");
}

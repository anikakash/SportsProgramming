#include <stdio.h>

long long int factoril(int n){
     long long int ans=1;
     for(int i=1; i<=n; i++){
          ans*=i;
     }
     return ans;
}
int main(){
   
     int n, cnt=0;
     while(scanf("%d",&n)==1){
          if(n>0)cnt++;
      }

     long long int hor = factoril(cnt);
     long long int lov = factoril(cnt-2);
     printf("%d\n", hor/(2*lov));
   return 0;
}
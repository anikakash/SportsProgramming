#include<bits/stdc++.h>
using namespace    std;
typedef long long int           LL;

int check(LL k){
       LL up=(1LL<< 31 )- 1 ;
       LL down = 1 ;
      LL mid;
      LL m;
      while (up>= down){
          mid=(up+down)/ 2 ;
          cout<<"MID "<<mid<<endl;
          m=mid*(mid- 1 )/ 2+ 1 ;
          cout<<"M "<<m<<endl;
          cout<<endl;
          if (m==k) return  1 ;
          else  if (m>k) up=mid- 1 ;
          else down=mid + 1 ;
      }
       return  0 ;
   }


int main(){
  #ifdef anikakash
       // clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("output.txt","w",stdout); 
  #endif

    int n,k;
       // freopen("data.txt","r",stdin); 
      scanf( " %d " ,& n);
       for (int i = 0 ;i<n;i++ ){
           scanf( " %d " ,& k);
           if (i) printf( "  " );
           printf( " %d " ,check(k));
       }
       printf( " \n " );

   return 0;
}

/*

  Let's take x is out input;
  so if we do y = x/2;
  then we can ((y*(y-1))/2) if this formula return us the excate number 


*/



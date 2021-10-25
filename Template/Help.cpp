#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("ans.txt", "w", stdout);
#endif

    int tt; scanf("%d",&tt);
    while(tt--){
        int b, p, f;
        scanf("%d %d %d", &b,&p, &f);

        int ans=0;
        if(b%2==1)b--;
        int h, c; scanf("%d %d", &h, &c);
        if(c>h){
            if(2*f>b){
                ans+= (b/2)*c;
            }
            else{
                ans+=f*c;
            }
        }
        else{
            if(2*p>b){
                ans+=(b/2)*h;
            }
            else{
                ans+=p*c;
            }
        }
        printf("%d\n",ans);
    }


#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
}
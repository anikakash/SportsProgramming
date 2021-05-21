#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[5], i;
    for(i=0; i<5; i++){
        scanf("%d",&ar[i]);
    }

    for(int j=0;j<5; j++){
        if(ar[j]==0){
            printf("%d\n",j+1);
        }
    }
    return 0;
}

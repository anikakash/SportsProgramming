// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// int main(){
//     #ifdef anikakash
//        freopen("INPUT.txt","r",stdin);
//        freopen("output.txt","w",stdout); 
//   #endif

//        int tt; cin>>tt;
//        while(tt--){
//         cout<<"HI"<<endl;
//        }
//     return 0;
// }
#include<stdio.h>
int main()
{
    #ifdef anikakash
       freopen("INPUT.txt","r",stdin);
       freopen("output.txt","w",stdout); 
  #endif
    char s[1005],a[1005];
    int i,j,sum=0,x,count[26]={0};
     fgets(s, sizeof(s), stdin);      
    for(i=1,j=0;s[j];i=i+3,j++){
 
        a[j]=s[i];
 
    }
 
 
 
  for(j=0;a[j];j++){
        if(a[j]!='}'){
        x=a[j]-97;
        count[x]++;
 
        }
    }
 
for(j=0;j<26;j++){
 
       if(count[j]>1){
        count[j]=1;
       }
 
    }
    for(j=0;j<26;j++){
 
       sum=sum+count[j];
 
    }
printf("%d\n",sum);
    return 0;
}

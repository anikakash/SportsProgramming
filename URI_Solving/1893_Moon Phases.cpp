#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;

        cin>>a>>b;
    if(0<=b && b<=2)
    cout<<"nova"<<endl;
    else if(3<=b && b<=96 && a<b)
    cout<<"crescente"<<endl;
    else if(3<=b && b<=96 && a>b)
    cout<<"minguante"<<endl;
    else if(97<=b && b<=100)
    cout<<"cheia"<<endl;



    return 0;
}

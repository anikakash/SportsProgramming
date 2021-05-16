//thanks God For Every Thing!
//contest link:https://www.urionlinejudge.com.br/judge/en/problems/view/1217
#include<bits/stdc++.h>
#define pi                      acose(-1)
#define rep(i,x)                for(int i=0; i<(x); i++)
#define rep1(i,x)               for(int i=1; i<=(x); i++)

typedef long long int           ll;
typedef double                  dl;
using namespace std;
int countWords(string str);
int main()
{
    int n, i, j, frt;
    dl cost;
    string s;
    cin>>n;
    int day[n];
    double total_cost=0, day_kg=0;
    for(i=1; i<=n; i++)
    {
        cin>>cost;
        cin.ignore();
        total_cost = total_cost+cost;

        getline(cin, s);
        frt = countWords(s);

        day [i]=frt;
        day_kg=frt+day_kg;
        frt=1;
    }
    for(i=1; i<=n; i++){
        printf("day %d: %d kg\n", i, day[i]);
    }
    cout<<fixed<<setprecision(2)<< day_kg/n<< " kg by day"<<endl;
    cout<<fixed<<setprecision(2)<<"R$ "<<total_cost/n<<" by day"<<endl;
    return 0;
}
int countWords(string str)
{
    stringstream s(str);
    string word;
    int count=0;
    while(s>>word)
        count++;
    return count;
}

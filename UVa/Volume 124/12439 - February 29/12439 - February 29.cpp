#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<map>
#include<string>
using namespace std;
map<string, int>ma;
void init()
{
    ma["January"]=1;
    ma["February"]=2;
    ma["March"]=3;
    ma["April"]=4;
    ma["May"]=5;
    ma["June"]=6;
    ma["July"]=7;
    ma["August"]=8;
    ma["September"]=9;
    ma["October"]=10;
    ma["November"]=11;
    ma["December"]=12;
 
}
bool judge(int y)
{
	if((y%400==0)||(y%100!=0&&y%4==0))
        return 1;
	return 0;
}
int main()
{
    init();
    int T,cas=0;
    int t1,t2,y1,y2;
    int m1,m2;
    string s1,s2;
    scanf("%d",&T);
    while(T--)
    {
        cas++;
        cin>>s1;scanf("%d,%d",&t1,&y1);
        
        cin>>s2;scanf("%d,%d",&t2,&y2);
        
        if(y1>y2)
		{
			swap(y1,y2);
			swap(t1,t2);
			swap(s1,s2);
		}
		
        m1=ma[s1];
        m2=ma[s2];
        
        if(m1>=3)
            y1++;
        if((m2<2) ||(m2==2 && t2<29))
            y2--;
		y1--;
        int tem1=y1/4-y1/100+y1/400;
        int tem2=y2/4-y2/100+y2/400;
        
        printf("Case %d: ",cas);
        printf("%d\n",tem2-tem1);
    }
    return 0;
}
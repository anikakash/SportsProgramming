#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h1, m1, h2, m2, time=0;
    while(scanf("%d %d %d %d", &h1, &m1, &h2, &m2))
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
            break;
        if(h1==0)
        {
            h1=24;
        }
        if(h2==0)
        {
            h2=24;
        }
        h1=(h1*60)+m1;
        h2=(h2*60)+m2;
        time = h2-h1;
        if(time<0)
        {
            time = time+1440;
        }
        printf("%d\n", time);
        time=0;
    }
    return 0;
}

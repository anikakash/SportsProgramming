//thanks God For Every Thing!
//contest link: https://www.urionlinejudge.com.br/judge/en/problems/view/1514
#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#define pi                      acose(-1)
#define rep(i,x)                for(int i=0; i<(x); i++)
#define rep1(i,x)               for(int i=1; i<=(x); i++)

typedef long long int           ll;
typedef double                  dl;
using namespace std;

const int MX = 1e2 + 5;

int arra[MX][MX], row[MX], col[MX];

int main()
{
    int n, m, i, j, c1, c2, c3, c4;

    while(scanf("%d %d", &n, &m) == 2 && n + m != 0)
    {
        c1 = c2 = c3 = c4 = 0;
        for(int i=0; i<=max(n, m); i++) row[i] = col[i] = 0;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                cin>>arra[i][j];
                row[i] += arra[i][j];
                col[j] += arra[i][j];
            }
            if(!row[i]) c4 = -1;
            else if(row[i] == m) c1 = -1;
        }
        for(int i=1; i<=m; i++) {
            if(!col[i]) c2 = -1;
            else if(col[i] == n) c3 = -1;
        }
        cout << 4 + (c1 + c2 + c3 + c4) << endl;
    }
    return 0;
}

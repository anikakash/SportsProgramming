///Stone pile
#include<bits/stdc++.h>
using namespace    std;

vector<int>valu;
int n;
void solve(int pos, vector<bool>visit)
{
    if(pos==n)
    {
        for(int i=0; i<n; i++)
        {
            if(visit[i])
            {
                cout<<valu[i]<<" ";
            }
        }
        cout<<endl;
        return;
    }
    visit[pos]=true;
    solve(pos+1, visit);
    visit[pos]=false;
    solve(pos+1, visit);
}
int main()
{
  #ifdef EXTRA_8
      clock_t tStart = clock();
      freopen("input.txt","r",stdin);
      freopen("out.txt","w",stdout);
  #endif
      cin>>n;
      vector<bool>visit(n,0);
      for(int i=0; i<n; i++)
      {
        int x;
        cin>>x;
        valu.push_back(x);
      }
      solve(0, visit);
    
    #ifdef EXTRA_8
        fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif
    return 0;
}


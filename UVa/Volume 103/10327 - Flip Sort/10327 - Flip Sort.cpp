#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<int> arr;
int Bobule_Sort()
{
	int size = arr.size(), cnt=0;
	for(int i=0; i<size-1; i++)
	{
		for(int j=0; j<size-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
				cnt++;
			}
		}
	}
	return cnt;
}
int main()
{
	 // #ifndef ONLINE_JUDGE
  //       clock_t tStart = clock();
  //       freopen("input.txt","r",stdin);
  //       freopen("out.txt","w",stdout);
  //    #endif
        int n;
        
        while(cin>>n)
        {
        	while(n--)
        	{
        		int x;
        		cin>>x;
        		arr.push_back(x);
        	}
        	cout<<"Minimum exchange operations : "<<Bobule_Sort()<<endl;

        	// for(int i=0; i<arr.size(); i++)
        	// 	cout<<arr[i]<<" ";
        	arr.clear();
        }
}
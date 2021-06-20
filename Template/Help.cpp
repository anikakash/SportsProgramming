
typedef long long int       ll;

void bubble_sort(ll list[], ll n)
{
    ll i,j,temp;
    int count =0;
    for(i=0; i<n;i++){
        for(j=0; j<n-i-1; j++){
            if(list[j]>list[j+1]){ // use < to sort in descending order//;
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}

int main(){
  
        int t;
        scanf("%d",&t);
        for(int j=0; j<t; j++)
        {
            int n;
            scanf("%d",&n);
            ll arr[n+2]={0};
               for(int i=0; i<n; i++)
                  scanf("%d",&arr[i]);

            bubble_sort(arr,n);

            printf("%lld\n",2*(arr[n-1]-arr[0]));
        }

   
   return 0;
}


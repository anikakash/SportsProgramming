#include<bits/stdc++.h>
using namespace std;
//https://atcoder.jp/contests/abc171/tasks/abc171_b
void bubble_sort(int list[], int n);
int main()
{
    int  n, c, sum=0;
    int k;
    scanf("%d", &n);
    int array[n];
    scanf("%d", &k);
    for(c=0; c < n; c++)
    {
        scanf("%d", &array[c]);
    }
    bubble_sort(array, n);

    for(c=0; c <k; c++)
    {
        sum = sum+array[c];
    }
    printf("%d\n", sum);
    return 0;
}
void bubble_sort(int list[], int n)
{
    int i,j,temp;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(list[j]>list[j+1])  // use < to sort in descending order//;
            {
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}

#include<stdio.h>
void bubble_sort(long list[], long n);
int main()
{
    long n, i, arr[100];
    printf("Enter The Number Of Element:\n");
    scanf("%d", &n);
    printf("Enter %ld Numbers: \n", n);
    for(i=0; i<n; i++){
        scanf("%ld",&arr[n]);
    }
    bubble_sort(arr,n);
    printf("THe ascending Number is: \n");
    for(i=0; i<n; i++){
        printf("%ld ", arr[i]);
    }
    return 0;
}
void bubble_sort(long list[], long n)
{
    long j, k, temp;
    for(j=0; j<n; j++){
        for(k=0;k<n-j-1; k++){
            if(list[k]>list[k+1]){
                temp = list[k];
                list[k] = list[k+1];
                list[k+1] = temp;
            }
        }
    }
}

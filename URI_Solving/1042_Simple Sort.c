#include<stdio.h>

int main()
{
    int p, q, r;
    scanf("%d %d %d",&p,&q,&r);
    if(p>q && p>r){ //p big
        if(q>r){
            printf("%d\n%d\n%d\n",r,q,p);
        }
        else{
            printf("%d\n%d\n%d\n",q,r,p);
        }
        printf("\n%d\n%d\n%d\n",p,q,r);
    }
    if(q>p && q>r){ //q big
        if(p>r){
            printf("%d\n%d\n%d\n",r,p,q);
        }
        else{
            printf("%d\n%d\n%d\n",p,r,q);
        }
        printf("\n%d\n%d\n%d\n",p,q,r);
    }
    if(r>p && r>q){ //r big
        if(p>q){
            printf("%d\n%d\n%d\n",q,p,r);
        }
        else{
            printf("%d\n%d\n%d\n",p,q,r);
        }
        printf("\n%d\n%d\n%d\n",p,q,r);
    }
    return 0;
}

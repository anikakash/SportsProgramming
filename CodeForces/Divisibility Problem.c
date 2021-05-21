
#include<stdio.h>
int main()
{
  int a,b,i,t;

  scanf("%d",&t);
  for(i=0;i<t;i++){
  scanf("%d %d",&a,&b);
  if(a%b == 0){
  printf("0\n");
  }
  else{
   printf("%d\n",b*(a/b+1)-a);
   }
   }
  return 0;
}

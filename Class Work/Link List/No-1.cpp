#include<stdio.h>
#include<stdlib.h>
typedef struct Info{
int age;

}info;

int main(){
    info *ptr;
    ptr =(info*)malloc(sizeof(info));
    ptr-> age =33;
    printf("%d\n",ptr-> age);
    return 0;
}

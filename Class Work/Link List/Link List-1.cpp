#include<bits/stdc++.h>
using namespace    std;

typedef struct INFO {
    int Roll;
    string name;
    struct INFO *next;
}info;

int main()
{
    info *ptr, *ptr1;

    ptr = (info*) malloc(sizeof(info));
    ptr ->Roll = 7;
    ptr ->name = "Anik";
    ptr->next = NULL;

    ptr1 = (info*) malloc(sizeof(info));
    ptr1 ->Roll = 10;
    ptr1 ->name = "Akash";
    ptr1->next = NULL;

    ptr->next = ptr1;

    cout<<ptr->Roll<<" "<<ptr->name<<endl;
    cout<<ptr1->Roll<<" "<<ptr->next->name<<endl;
    return 0;
}

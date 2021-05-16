#include<bits/stdc++.h>
using namespace std;

typedef struct info{
    int roll;
    struct info *next;
}data;

data *head;

void insert_Nth(int a, int n)
{   data *temp = head;

    data *node = (data*)malloc(sizeof(data));
    node -> roll = a;
    node -> next = NULL;

    if(n==1)
    {
        node -> next = head;
        head = node;
        return;
    }
    n-=2;
    while(n--)
    {
        temp = temp->next;
    }
    node->next = temp->next;
    temp->next = node;
}

void print()
{
    data *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->roll<<endl;
        temp = temp -> next;
    }
}
int main()
{
    head=NULL;
    int x, y;
    cin>>x>>y;
    insert_Nth(x,y);
    print();
}



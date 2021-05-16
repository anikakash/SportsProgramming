#include<bits/stdc++.h>
using namespace std;

typedef struct info{
    int roll;
    struct info *next;
}data;

data *head;

void insert_begin(int a)
{
    data *temp = (data*)malloc(sizeof(data));
    temp -> roll = a;
    temp -> next = NULL;
    temp -> next = head;
    head = temp;
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
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        insert_begin(x);
    }
    print();
}


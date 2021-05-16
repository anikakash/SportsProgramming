#include<bits/stdc++.h>
using namespace std;

typedef struct info{
    int roll;
    struct info *next;
}data;

data *head=NULL;;

///insert_Nth(); Passing argument is two. First one is value and second is position;
///position start from 1; [Not 0]
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
        if(temp->next == NULL || head->next == NULL)
        {
            temp->next = node;
            return;
        }
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
    insert_Nth(5, 1);
    print();
}

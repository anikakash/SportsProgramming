#include<bits/stdc++.h>
using namespace std;

typedef struct info{
    int roll;
    struct info *next;
}data;

data *head=NULL;;

///insert_end() ; Pasing Argument is: the value;
void insert_end(int x)
{
    data *temp = (data*)malloc(sizeof(data));
    temp -> roll = x;
    temp -> next = NULL;
    if(head == NULL)
    {
        head = temp;
        return;
    }
    data *node = head;
    while(node ->next !=NULL)
    {
        node = node ->next;
    }
    node ->next = temp;
}

///insert_begin() ; Passing Argument is: the value;
void insert_begin(int a)
{
    data *temp = (data*)malloc(sizeof(data));
    temp -> roll = a;
    temp -> next = NULL;
    temp -> next = head;
    head = temp;
}

///insert_Nth(); Passing argument is two. First one is value and second is position;
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
    

}
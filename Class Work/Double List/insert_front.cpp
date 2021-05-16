#include<bits/stdc++.h>
using namespace std;

typedef struct node{
    struct node *pre;
    int data;
    struct node *next;
}node;

node *head = NULL;
node *last = NULL;

void insert_front(int valu)
{
    node *new_node = (node*)malloc(sizeof(node));
    new_node->data = valu;
    new_node -> pre = NULL;
    new_node -> next = NULL;
    if(head == NULL)
    {
        head = new_node;
        last = new_node;
    }
    else
    {
        new_node -> next = head;
        head -> pre = new_node;
        head = new_node;
    }
}
void insert_back(int valu)
{
    node *new_node = (node*)malloc(sizeof(node));
    new_node -> data = valu;
    new_node -> pre  = NULL;
    new_node -> next = NULL;
    if(head == NULL)
    {
        head = new_node;
        last = new_node;
    }
    else
    {
        last -> next = new_node;
        new_node -> pre = last;
        last = new_node;
    }
}

void insert_Nth(int n, int valu)
{
    node *new_node = (node*)malloc(sizeof(node));
    new_node -> data = valu;
    new_node -> pre  = NULL;
    new_node -> next = NULL;
    if(head == NULL)
    {
        if(n==1)
        {
            head = new_node;
            last = new_node;
        }
        else cout<<"Stop Try Access"<<endl;
    }
    else
    {
        if(n==1)
        {
            new_node -> next = head;
            head -> pre = new_node;
            head = new_node;
        }
        else
        {
            n-=2;
            node *temp = head;
            while(n-- && temp!=NULL) temp = temp->next;
            if(temp==NULL)cout<<"Stop Try Access"<<endl;
            else
            {
                if(temp == last)
                {
                    last -> next = new_node;
                    new_node -> pre = last;
                    last = new_node;
                }
                else
                {
                    new_node -> next = temp -> next;
                    new_node -> pre = temp;
                    temp -> next -> pre = new_node;
                    temp -> next = new_node;
                }
            }
        }
    }
}

void print()
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp = temp -> next;
    }
}
void revers_print()
{
    node *temp = last;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp = temp -> pre;
    }
}
int main()
{
    insert_Nth(1, 5);
    insert_Nth(2, 6);
    //print();
    //revers_print();
}

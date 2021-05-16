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
void delete_front()
{
    if(head == NULL)cout<<"Blank List"<<endl;
    else if(head == last)
    {
        node *out = head;
        free(out);
        head = NULL;
        last = NULL;
    }
    else
    {
        node *out = head;
        head = head->next;
        head -> pre = NULL;
        free(out);
    }
}
void delete_back()
{
    if(head == NULL)cout<<"Blank List"<<endl;
    else if(head == last)
    {
        node *out = last;
        free(out);
        head = NULL;
        last = NULL;
    }
    else
    {
        node *out = last;
        last = last->pre;
        last -> next = NULL;
        free(out);
    }
}
void delete_nth(int n)
{

    if(head == NULL)cout<<"Blank List"<<endl;
    else
    {
        if(n==1)
        {
            if(head == last)
            {
                node *out = head;
                free(out);
                head = NULL;
                last = NULL;
            }
            else
            {
                node *out = head;
                head = head -> next;
                head -> pre = NULL;
                free(out);
            }
        }
        else
        {
            node *temp = head;
            n--;
            while(n-- && temp!=NULL) temp = temp ->next;
            if(temp == NULL)cout<<"Wrong Position"<<endl;
            else
            {
                if(temp == last)
                {
                    node *out = last;
                    last = last -> pre;
                    last -> next = NULL;
                    free(out);
                }
                else
                {
                    node *out = temp;
                    temp -> next -> pre = temp ->pre;
                    temp -> pre ->next = temp ->next;
                    free(out);
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
    insert_front(5);
    insert_front(6);
    insert_front(7);
    insert_front(8);
   // print();
    delete_nth(2);
    //delete_nth(2);
    print();
    //revers_print();
}



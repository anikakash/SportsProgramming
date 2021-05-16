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
void delete_a_value(int value)
{
    if(head == NULL)printf("Empty\n");
    else
    {
        if(head -> data == value)
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
        else if(last -> data == value)
        {
            if(head == last)
            {
                node *out=last;
                free(out);
                head = NULL;
                last = NULL;
            }
            else
            {
                node *out = last;
                last = last -> pre;
                last -> next = NULL;
                free(out);
            }
        }
        else
        {
            node *temp = head;
            while(temp !=NULL)
            {
                if(temp -> data == value)
                {
                    node *out = temp;
                    temp ->next ->pre = temp ->pre;
                    temp -> pre -> next = temp ->next;
                    free(out);
                    return;
                }
                temp = temp->next;
            }
                printf("Nothing found\n");
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
    delete_a_value(7);
    print();
    //revers_print();
}



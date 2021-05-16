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
void delete_back()
{
    if(head == NULL)cout<<"The list is blank"<<endl;
    else
    {
        if(head -> next == NULL)
        {
            data *out = head;
            head = head -> next;
            free(out);
        }
        else
        {
            data *temp = head;
            while(temp -> next -> next !=NULL) temp = temp ->next;
            data *out = temp->next;
            temp -> next = NULL;
            free(out);
        }
    }
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
    insert_end(10);
    insert_end(20);
    delete_back();
    print();
}

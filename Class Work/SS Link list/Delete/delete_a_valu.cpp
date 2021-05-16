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
void delete_a_valu(int n)
{
    if(head == NULL)cout<<"The list is blank"<<endl;
    else
    {
        if(head -> roll == n)
        {
            data *out = head;
            head = head -> next;
            free(out);
        }
        else
        {
            data *temp = head;
            while(temp->next !=NULL)
               {
                   if(temp ->next -> roll == n)
                   {
                        data *out = temp ->next;
                        temp ->next = temp ->next->next;
                        free(out);
                        return;
                   }
                   temp = temp->next;
               }
            cout<<"Access Deny"<<endl;

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
    insert_end(30);
    insert_end(40);
    delete_a_valu(20);
    print();
}



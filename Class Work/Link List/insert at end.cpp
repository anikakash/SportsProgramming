#include<bits/stdc++.h>
using namespace std;

typedef struct info{
    int roll;
    struct info *next;
}data;

data *head;

///insert_end ; Pasing Argument is: the value;
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

void print()
{
    data *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->roll<<" ";
        temp = temp -> next;
    }
}
int main()
{
    head=NULL;
    insert_end(2);
    insert_end(0);
    insert_end(1);
    insert_end(1);
    insert_end(5);
    insert_end(1);
    insert_end(4);
    insert_end(2);
    insert_end(1);
    insert_end(0);
    print();
}



#include<bits/stdc++.h>
using namespace std;

typedef struct info{
    char name;
    struct info *next;
}data;

data *head=NULL;;

///insert_end() ; Pasing Argument is: the value;
void insert_end(char x)
{
    data *temp = (data*)malloc(sizeof(data));
    temp -> name = x;
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
        cout<<temp->name<<endl;
        temp = temp -> next;
    }
}
int main()
{
    insert_end('5');
    insert_end('6');
    print();

}


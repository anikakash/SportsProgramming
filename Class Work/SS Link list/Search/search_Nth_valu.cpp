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

void search_Nth_valu(int n)
{
    data *temp = head;
    n--;
    while(n&& temp!=NULL)
    {
        temp = temp -> next;
        n--;
    }
    if(temp == NULL)cout<<"Nothing Found in list"<<endl;
    else cout<<temp->roll<<endl;
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
    insert_end(5);
    insert_end(6);
    insert_end(7);

   search_Nth_valu(1);


}

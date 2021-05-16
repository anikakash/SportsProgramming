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
void sum()
{
    int sum;
    data *temp = head;
    while(temp!=NULL)
    {
        sum+=temp->roll;
        temp = temp -> next;
    }
    cout<<sum<<endl;
}
int main()
{
    insert_end(5);
    insert_end(6);
    sum();

}




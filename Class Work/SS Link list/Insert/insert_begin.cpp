#include<bits/stdc++.h>
using namespace std;

typedef struct info{
    int roll;
    struct info *next;
}data;

data *head=NULL;;

///insert_begin() ; Passing Argument is: the value;
void insert_begin(int a)
{
    data *temp = (data*)malloc(sizeof(data));
    temp -> roll = a;
    temp -> next = NULL;
    temp -> next = head;
    head = temp;
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
    insert_begin(5);
    print();
}




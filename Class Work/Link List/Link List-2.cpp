#include<bits/stdc++.h>
using namespace std;

typedef struct INFO{
    int id;
    string name;
    struct INFO *next;
}data;

int main()
{
    data *head, *temp;


    ///first Block
    head = (data*)malloc(sizeof(data));
    head -> id = 1;
    head -> name = "Anik";

   ///second Block
    head -> next = (data*)malloc(sizeof(data));
    head -> next ->id = 2;
    head -> next ->name = "Akash";

  ///Third Block
    head -> next -> next = (data*)malloc(sizeof(data));
    head -> next -> next ->id = 3;
    head -> next -> next ->name = "Bishal";
    head -> next -> next ->next = NULL;

    temp = head;  ///coping Head address;
    while(temp!=NULL)
    {
        cout<<"ID : "<<temp->id<<" Name : "<<temp->name<<endl;
        temp = temp->next;
    }

    return 0;
}

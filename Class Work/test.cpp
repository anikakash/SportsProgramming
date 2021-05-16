#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
};
int main ()
{
    struct node* head = (struct node*)malloc (sizeof (Struct node));
    struct node* second = (struct node*)malloc (sizeof (Struct node));
    struct node* third = (Struct node*)malloc (sizeof (Struct node));
    struct node* fourth = (Struct node*)malloc (sizeof (Struct node));
    struct node* fifth = (Struct node*)malloc (sizeof (Struct node));

    head -> data = 5;
    head -> next = second;

    second -> data = 7;
    second -> next = third;

    third -> data = 9;
    third -> next = fourth;

    fourth -> data = 11;
    fourth -> next = fifth;

    fifth -> data = 13;
    fifth -> next = NULL;

    struct node* temp;
    temp = head-> next->next->next->next;

    printf("%d", temp-> data);
}

#include <stdio.h>
#include <stdlib.h>
typedef struct Data{
    int age;
    struct Data *next;

}Data;
Data *head;


void insert_at_end(int a){
    Data *temp = (Data*) malloc (sizeof(Data));
    temp -> age = a;
    temp -> next = NULL;
    if(head == NULL){
        head = temp;
        return;
    }

    Data *node = head;
    for(; node -> next != NULL ;){
        node = node -> next;
    }
    node -> next = temp;
}

void print(){
    Data *temp = head;
    while(temp != NULL){
        printf("%d ", temp -> age);
        temp = temp -> next;
    }
    printf("\n");
}

int main()
{
    head = NULL;

    insert_at_end(2);
    insert_at_end(0);
    insert_at_end(1);
    insert_at_end(1);
    insert_at_end(5);
    insert_at_end(1);
    insert_at_end(4);
    insert_at_end(2);
    insert_at_end(3);
    insert_at_end(7);

    print();

}

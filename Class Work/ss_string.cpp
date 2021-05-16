void delete_a_value(char value)
{
    node *temp = head;
            while(temp !=NULL)
            {
                if(temp -> data == value)
                {
                    node *out = temp;
                    temp ->next ->pre = temp ->pre;
                    temp -> pre -> next = temp ->next;
                    free(out);
                    return;
                }
                temp = temp->next;
            }
}


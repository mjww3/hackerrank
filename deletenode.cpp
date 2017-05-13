

Node* Delete(Node *head, int position)
{
  struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    Node* n;
    n = head;
    if(position==0)
        {
        head = head->next;
    }
    else
        {
        for(int i=1;i<position;i++)
            {
            n = n->next; 
        }
        n->next = n->next->next;
    }
    return head;
    
}

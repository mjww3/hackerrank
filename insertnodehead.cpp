/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
  //head of the linked list insertion
    struct Node* new_node = NULL;
    new_node = (struct Node*)malloc(sizeof(struct Node));
    if(head==NULL)
        {
        new_node->data = data;
        new_node->next = NULL;
        head =new_node;
        return head;
    }
    else
        {
        new_node->data = data;
        new_node->next = head;
        head = new_node;
        return head;
    }
    
}

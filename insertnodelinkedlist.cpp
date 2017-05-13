/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    struct Node* new_node = NULL;
    new_node = (struct Node*)malloc(sizeof(Node));
    new_node->data = data;
    struct Node* last = head;
    if(head==NULL)
        {
        new_node->next = NULL;
        head = new_node;
        return head;
    }
    while(last->next!=NULL)
        {
       last = last->next;
    }
    last->next = new_node;
    new_node->next = NULL;
    return head;
    
  // Complete this method
}

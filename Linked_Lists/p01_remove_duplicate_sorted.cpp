class Solution
{
public:
  Node *removeDuplicates(Node *head)
  {
    // your code here
    Node *curr = head;

    while (curr != NULL && curr->next != NULL)
    {

      if (curr->data == curr->next->data)
      {
        curr->next = curr->next->next;
      }
      curr = curr->next;
    }

    return head;
  }
};
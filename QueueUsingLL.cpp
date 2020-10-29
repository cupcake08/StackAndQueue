//for complete problem refer to Coding Ninjas Platform

#include <climits>
class Queue
{
  Node *head;
  Node *tail;
  int size;
public:
  Queue()
  {
    head=NULL;
    tail=NULL;
    size=0;
  }
  int getSize()
  {
    return size;
  }
  bool isEmpty()
  {
    return head==NULL;
  }
  void enqueue(int data)
  {
    Node *newNode=new Node(data);
    if(head==NULL)
    {
      head=newNode;
      tail=newNode;
    }else
    {
      tail->next=newNode;
      tail=newNode;
    }
    size++;
  }
  int front()
  {
    if(head==NULL)
    {
      return -1;
    }
    return head->data;
  }
  int dequeue()
  {
    if(head==NULL)
    {
      return -1;
    }
    int ans=head->data;
    head=head->next;
    size--;
    return ans;
  }
};

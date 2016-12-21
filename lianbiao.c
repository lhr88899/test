#include<stdio.h>
#include<stdlib.h>

typedef struct node{
   int a;
   struct node *next;
}Node;

Node * create(Node *h,int n)
{
  if(h)
    {
   int i;
    Node *s =h;
   for( i=1;i<n;i++)
    {
   Node *p =(Node *)malloc(sizeof(Node));
   s->next=p;
   p->next=NULL;
   p->a=i+1;
   s = p;
    }
  }
}


void nixu(Node *head)
{
   if(head != NULL && head->next != NULL){
   Node *a=head;
   Node *b=head->next;
   Node *c=NULL;
   while(b)
   {
      c= b->next;
      b->next = a;
      a = b;
      b=c;

   }
   head->next=NULL;   
   head = a;
   while(head)
   {
      printf("%d",head->a);
      head = head->next;
   }
}}
Node * main()
{
   Node* head=(Node *)malloc(sizeof(Node));
   head->next=NULL;
   head->a=0;
   create(head,2);
/*  xian shi lian biao
   for( i=0;i<3;i++)
   {
      printf("%d",head->a);
      head=head->next;
   }   
*/

/* lian biao ni xu*/
    Node *b=head;
    printf("b:%d\n",b->a);
   nixu(head);
   while(head)
   {
   printf("%d",head->a);
   head=head->next;
    }
   
}

#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next; 
};
struct Node *topll=NULL;
void push(int value)
{
    struct Node *newnode=(struct Node*) malloc(sizeof(struct Node));
    newnode->data=value;
    newnode->next=topll;
    topll=newnode;
}
void pop()
{
    if(topll==NULL)
    {
        printf("stack is empty");

    }
    else{
      struct Node *temp=topll;
      printf("%d is deleted\n ",temp->data);

      topll=topll->next;
      free(temp);
  
    }
 
}
void Display()
{
  

    if(topll==NULL)
    {
        printf("stack is empty");
    }
    else{
          struct Node *t;
              t=topll;
        while(t!=NULL)
        {
            printf("%d->",t->data);
            t=t->next;
        }
        printf("NULL\n");
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    pop();
    Display();
    printf("Hellow world");
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void pushnode(int value)
{
   struct Node *temp=(struct Node*) malloc(sizeof(struct Node));
    temp->data=value;
    temp->next=head;
    // struct Node Head=(struct Node*) malloc(sizeof(struct Node));
    head=temp;


}
void popnode()
{
    if(head==NULL)
    {
        return;
    }
    else{
       struct Node *temp=head;
            printf("%d is deleted\n",temp->data);
            head=head->next;
        free(temp);
    }
}
void display()
{
    if(head==NULL)
    {
        printf("Node is empty");
    }
    else{
        struct Node *t;
        t=head;
        while(t!=NULL)
        {
            printf("%d->",t->data);
            t=t->next;
        }
        printf("NULL");
    }
}
int main()
{
    int a[]={10,20,30,40,50};
    for(int i=0;i<5;i++)
    {
        pushnode(a[i]);
    }
    popnode();
    display();
    return 0;

}
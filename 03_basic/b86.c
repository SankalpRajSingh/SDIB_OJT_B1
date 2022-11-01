#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
}node;
void ins(struct node **head,int num)
{
struct node *newnode;
newnode=(struct node*) malloc(sizeof(node));
newnode->data=num;
newnode->next=NULL;
newnode->prev=(*head);
if((*head)!=NULL)
(*head)->next=newnode;
(*head)=newnode;

}
void disp( struct node *head)
{
    struct node* last;
    while(head!=0)
    {
        printf("%d",head->data);
printf("\n");
    last=last->next;
    }
    printf("\n");


}
int main()
{
    struct node *start;
    start=NULL;
    ins(&start,2);
    ins(&start,6);
    ins(&start,9);
    ins(&start,3);
    disp(start);
    return 0;
}
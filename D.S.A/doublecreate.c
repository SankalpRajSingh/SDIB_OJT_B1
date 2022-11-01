#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *newmem, *head;
void create()
{
    newmem=(struct node *)malloc(sizeof(struct node));
    head=newmem;
    if (head!=NULL)
    {
        printf("Enter new member\n");
        scanf("%d",&newmem->data);
        newmem->prev=NULL;
        newmem->next=NULL;   
    }
}
void display()
{
    printf("The entered value is :\t");
    if(head!=NULL)
    {
        printf("%d",head->data);
    }
}
void main()
{
    create();
    display();
}
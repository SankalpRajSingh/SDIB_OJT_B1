#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
struct node
{
    int data;
    struct node *next;
};
struct node *newmem, *head, *temp;
void create()
{
    if (head==NULL)
    {
        newmem=(struct node *)malloc(sizeof(struct node));
        head=newmem;
        printf("Enter head member\n");
        scanf("%d",&head->data);
        head->next=NULL;
    }
}
void insert()
{
    int i, count;
    if(head->next==NULL)
    {
        newmem=(struct node *)malloc(sizeof(struct node));
        temp=newmem;
        printf("Enter next member after head\n");
        scanf("%d",&temp->data);
        head->next=temp;
        // newmem=(struct node *)malloc(sizeof(struct node));
        printf("Enter the extra number of nodes\t");
        scanf("%d",&count);
        for (i = 0; i < count; i++)
        {
            newmem=(struct node *)malloc(sizeof(struct node));
            temp->next=newmem;
            printf("Enter next member\n");
            scanf("%d",&newmem->data);
            temp=newmem;
        }
        temp->next=NULL;
    }
}
void display()
{
    int i=0;
    printf("The entered value is :\n");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d : %d\n",i+1,temp->data);
        temp=temp->next;
        i=i+1;
    }
}
// void deleteatend()                                           DELETING LAST NODE WITHOUT CLEARING THE MEMORY
// {
//     temp=head;
//     while (temp->next->next!=NULL)
//     {
//         temp=temp->next;
//     }
//     temp->next=NULL;
// }
void deleteatend()                                             // DELETING LAST NODE WITH CLEARING THE MEMORY
{
    temp=head;
    while (temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    newmem=temp;
    temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    free(temp);
    newmem->next=NULL;
}
void main()
{
    int option;
    create();
    insert();
    display();
    printf("If you want to delete at end press 1 else 0 :\t");
    scanf("%d",&option);
    if (option == 1)
    {
        deleteatend();
        display();
    } 
}
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
int n,i,s;
struct node *temp,*head;
void creation()
{
struct node *newnode;
printf("enter the number of nodes:");
scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d",&newnode->data);
        temp=head;
        if (head==NULL)
        {
            head=newnode;
            newnode->next=NULL;
        }
        else
        {
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->next=NULL;
        }
    }
}
void traversal()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    
}
void search()
{
    int flag=0;
    int c=1;
    printf("enter the element to be searched:");
    scanf("%d",&s);
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data==s)
        {
            flag=1;
            break;
        }
        c++;
        temp=temp->next;
    }
    if(flag==1)
    printf("\nelement is found at position %d",c);
    else
    printf("element not found");
    
}
void insertionbeg()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}
void insertionpos()
{
    int pos,i;
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the position:");
    scanf("%d",&pos);
    printf("enter the data");
    scanf("%d",&newnode->data);
    temp=head;
    for(i=1;i<pos-1;i++)
    {
        temp=temp->next;
        
    }
    newnode->next=temp->next;
    temp->next=newnode;
    
}
void insertionend()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&newnode->data);
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=NULL;
}
void deletionbeg()
{
    temp=head;
    head=head->next;
    free(temp);
}
void deletionpos()
{
    struct node *temp2;
    int i,pos;
    printf("enter the position");
    scanf("%d",&pos);
    temp=head;
    for(i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    temp2=temp->next;
    temp->next=temp->next->next;
    free(temp2);
    
}
void deletionend()
{
    temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
    
}
void main()
{
    int d;
    while(1)
    {
        printf("\n1.creation\n2.traversal\n3.search\n4.insertionbeg\n5 .insertionpos\n6.insertionend\n7.deletionbeg\n8.deletionpos\n9.deletionend\n10.exit\nenter the choice:");
        scanf("%d",&d);
        switch(d)
        {
            case 1:creation();
            break;
            case 2:traversal();
            break;
            case 3:search();
            break;
            case 4:insertionbeg();
            break;
            case 5:insertionpos();
            break;
            case 6:insertionend();
            break;
            case 7:deletionbeg();
            break;
            case 8:deletionpos();
            break;
            case 9:deletionend();
            break;
            case 10:exit(0);
}
}
}

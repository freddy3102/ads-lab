#include <stdio.h>
#include<stdlib.h>
struct node
{
    struct node *next;
    int data;
};
struct node *top;
struct node *temp;
void push()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    
    printf("Enter the data:");
    scanf("%d",&newnode->data);
if(top==NULL)
{
  top=newnode;
  newnode->next=NULL;
}
else
{
    newnode->next=top;
    top=newnode;
}
}
void pop()
{
    temp=top;
    if(temp==NULL)
    {
        printf("Stack is empty");
    }
    else
    {
    printf("Deleted element is %d",temp->data);
    top=top->next;
    free(temp);
    }
}
void display()
{
    temp=top;
    while(temp->next!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}
void main()
{  
    int c;
    while(1)
    {
        printf("\nMENU\n");
        printf("------------\n");
        printf("1.Push\n");
        printf("2.Display\n");
        printf("3.Pop\n");
        printf("4.Exit\n");
        printf("Enter a choice:");
        scanf("%d",&c);
        switch(c)
        {
            case 1:push();
                    break;
            case 2:display();
                    break;
            case 3:pop();
                    break;
            case 4:exit(0);
            default:
                    printf("Wrong choice");
        }
    }
}


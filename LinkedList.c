#include<stdio.h>
#include<stdlib.h>
#include<string.h>



struct node
{
int key;
int data;
struct node *next;
}
node;

struct node *head=NULL;
struct node *current=NULL;


void insertFirst(int key,int data)
{
struct node *link=(struct node*)malloc(sizeof(struct node));

link->key=key;
link->data=data;

link->next=head;

head=link;
}
void printList()
{
struct node *ptr=head;

while(ptr!=NULL)
{
printf("%d%d",ptr->key,ptr->data);
ptr=ptr->next;
}
}

void main()
{
insertFirst(1,10);
printList();

}
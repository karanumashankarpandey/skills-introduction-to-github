#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};
int main()
{

struct node *head;
struct node *second;
struct node *third;
struct node*fourth;

head=(struct node*)malloc(sizeof(struct node));

second=(struct node*)malloc(sizeof(struct node));

third=(struct node*)malloc(sizeof(struct node));

fourth=(struct node *)malloc(sizeof(struct node));

head->data=10;
head->next=second;

second->data=20;
second->next=third;

third->data=30;
third->next=fourth;

fourth->data=40;
fourth->next=head;

// for printing the linked list

 struct node* temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head); // Stop when we reach the head again

    return 0;
}


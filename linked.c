//program to implement simple linked list
#include<stdio.h>
#include<stdlib.h>
//inserting a node

struct node{
    int data;
    struct node* head;

};
void print(struct node* head){
struct node* ptr=head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->head;

    }

}


void insert(struct node** head,int data){
    struct node* neww;
    neww=(struct node*)malloc(sizeof(struct node));
    neww->data=data;
    neww->head=*head;
    *head=neww;

}



int main(){
    int data;
    struct node* head;
    struct node* first;
    struct node* secound;
    head=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    secound=(struct node*)malloc(sizeof(struct node));
head->data=22;
head->head=first;
first->data=24;
first->head=secound;
secound->data=28;
secound->head=NULL;
printf("Enter the value to add at start-");
scanf("%d",&data);
insert(&head,data);
print(head);
}
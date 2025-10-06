#include<stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node * next;
};
 void traversingLinkedList(struct node * head){
    struct node * traverse;
    traverse = head;
    while(traverse!=NULL){
        printf("%d ",traverse->data);
        traverse= traverse->next;
    }
 }



struct node * insertAtBeg(struct node *head,int data){
    struct node * new;
    new =(struct node*) malloc(sizeof(struct node));
    new->data =data;
    new->next = head;
    head = new;
    return head;
}

void main(){
    struct node* head= NULL;
    head = insertAtBeg(head ,11);
    head = insertAtBeg(head ,15);
    head = insertAtBeg(head ,16);
    head = insertAtBeg(head ,1);
    head = insertAtBeg(head ,181);

    traversingLinkedList(head); 
}
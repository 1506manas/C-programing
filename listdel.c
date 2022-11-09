#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int a,c;
int main(){
    int b;
    struct node* loc=NULL;
    struct node *head=NULL;
    struct node *second=NULL;
    struct node *third=NULL;
    struct node *fourth=NULL;
    struct node *fifth=NULL;
    struct node *sixth=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    fifth=(struct node*)malloc(sizeof(struct node));
    sixth=(struct node*)malloc(sizeof(struct node));

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=fourth;

    fourth->data=4;
    fourth->next=fifth;

    fifth->data=5;
    fifth->next=sixth;

    sixth->data=6;
    sixth->next=NULL;

    printlist(head);
    printf("1-delete in beginning\n2-delete a node\n3-delete at end");
    printf("enter your choice:");
    scanf("%d",&b);
    switch(b){
        case 1:
            del_beg(head);
            break;
        case 2:
            del_after(head);
            break;
        case 3:
            del_end(head);
            break;
    }
    return 0;
}
        
void printlist(struct node *n){
    printf("printing all the elements in the linkedlist\n");
    if(n==NULL){
        printf("\nthe linked list is empty");
    }
    else{
         if(n->next==NULL){
            printf("single node only present");
            printf("data of linked list:%d",n->data);
        }
        else{
            while(n!=NULL){
                printf("%d\t",n->data);
                n=n->next;
            }
        }
    }
}

void del_beg(struct node* n){
    struct node* b=(struct node*)malloc(sizeof(struct node));
    b=n;
    n=n->next;
    free(b);
    printlist(n);
}

int del_after(struct node* n){
    struct node *ptr=NULL;
    struct node *ptr1=NULL;
    struct node* b=NULL;
    int i,loc;
    printf("\nenter the location:");
    scanf("%d",&loc);
    ptr=n;
    for(i=1;i<loc;i++){
        ptr1=ptr;
        ptr=ptr->next;
    }
    ptr1->next=ptr->next;
    free(ptr);
    b=n;
    while(b!=NULL){
                printf("%d\t",b->data);
                b=b->next;
            }
}
void del_end(struct node* n){
    struct node* b=(struct node*)malloc(sizeof(struct node));
    struct node* ptr=NULL;
    struct node* q=NULL;
    b=n;
    while(b->next!=NULL){
        ptr=b;
        b=b->next;
    }
    ptr->next=NULL;
    free(b);
    q=n;


    while(q!=NULL){
        printf("%d\t",q->data);
        q=q->next;
    }
}
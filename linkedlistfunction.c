#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int a,c;
int main(){
    int b;
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

    printf("1-Print the list\n2-Find address of last node\n3-Insert a node in the last\n4-Insert a node at beginning\n5-insert after a given node\n6-delete at beginning\n7-delete any node\n8-delete at last");
    printf("\nenter your choice:");
    scanf("%d",&a);

    switch(a){
        case 1:
            printlist(head);
            break;
        case 2:
            lastadd(head);
            break;
        case 3:
            c=insert_end(head);
                printlist(head);
            break;
        case 4:
           a= insert_beg(head);
            break; 
        case 5:
            c=insert_after(head);
            printlist(head);
            break; 
        case 6:
            del_beg(head);
            break;
        case 7:
            del_after(head);
            break;
        case 8:
            del_end(head);
            break; 
    }
    
    return 0;
}


printlist(struct node *n){
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

void lastadd(struct node *n){
    printf("\nfinding add. of last node.");
    if(n==NULL){
        printf(NULL);
    }
    else{
        while(n->next!=NULL){
            n=n->next;
        }
    }
    printf("\n%d is the adrr of last node \n%d is the data of last node",n,n->data);
}

int insert_end(struct node* n){
    
    struct node *b=(struct node *)malloc(sizeof(struct node));
    printf("\nenter the data:");
    scanf("%d",&a);
    b->data=a;
    b->next=NULL;
    while(n->next!=NULL){
       n=n->next;
    }
    n->next=b;
    return b;
}
int insert_beg(struct node* n){  
    struct node *b=NULL;
    b=(struct node *)malloc(sizeof(struct node));
    int element;
    printf("\nenter the element:");
    scanf("%d",&element);
    b->data=element;
    b->next=n;
    n=b;
    printlist(b);
}
int insert_after(struct node* n){
    struct node* b=(struct node *)malloc(sizeof(struct node));
    struct node * temp=NULL;
    int i,loc;
    printf("\nEnter the location:");
    scanf("%d",&loc);
    int element;
    printf("\nenter the element:");
    scanf("%d",&element);
    b->data=element;
    temp=n;
    for(i=1;i<loc;i++){
        temp=temp->next;
    }
    b->next=temp->next;
    temp->next=b;
    return b;
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
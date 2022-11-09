#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int a,c;
int main(){
    
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
    lastadd(head);
    c=insert_end(head);
    printlist(head);
    insert_beg(head);
    
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

void insert_end(struct node* n){
    struct node *q=NULL;
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
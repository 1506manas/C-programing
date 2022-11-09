#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
int bintree(int data1){
    struct node *n=(struct node*)malloc(sizeof(struct node));
    n->data=data1;
    n->left=NULL;
    n->right=NULL;
    return(n);
}
void printPreorder(struct node* node){
    if(node==NULL){
        return 0;
    }
    printf("%d\n",node->data);
    printPreorder(node->left);
    printPreorder(node->right);
}
void printPostorder(struct node* node){
    if(node==NULL){
        return 0;
    }
    printPostorder(node->left);
    printPostorder(node->right);
    printf("%d\n",node->data);
}
void printInorder(struct node* node){
    if(node==NULL)
        return 0;
    printInorder(node->left);
    printf("%d\n",node->data);
    printInorder(node->right);
}
int maxheight(struct node* node){
    if(node==NULL){
        return -1;
    }
    else{
        int Lheight=maxheight(node->left);
        int Rheight=maxheight(node->right);
        if(Lheight>Rheight){
            return (Lheight+1);
        }
        else{
            return (Rheight+1);
        }
    }
}
int flag=0;
int search(struct node* node,int key){
    if(node==NULL){
        return NULL;
    }
    else{
        if(key==node->data){
            flag=1;
            return;
        }
        if(key<node->data){
            search(node->left,key);
        }
        if(key>node->data){
            search(node->right,key);
        }
    }
}
int insert(struct node* node,int key){
    if(node==NULL){
        return bintree(key);
    }
    if(key<node->data){
        node->left=insert(node->left,key);
    }
    if(key>node->data){
        node->right=insert(node->right,key);
    }
    return node;
}
int deletion(struct node* node,int key){
    if(node==NULL){
        return NULL;
    }
    if(key<node->data){
        node->left=deletion(node->left,key);
    }
    if(key>node->data){
        node->right=deletion(node->right,key);
    }
    else{
        if(key==node->data){
            struct node* temp=node->right;
            free(node);
            return temp;
        }
        else if(node->right==NULL){
            struct node* temp=node->left;
            free(node);
            return temp;
        }
    }
}
int minvalue(struct node* node){
    if(node->left==NULL){
        return node->data;
    }
    else{
        minvalue(node->left);
    }
}

int main(){
    int key;
    struct node* root=NULL;
    root=(struct node*)malloc(sizeof(struct node));
    root=bintree(50);
    root->left=bintree(40);
    root->right=bintree(60);
    root->left->left=bintree(30);
    root->right->right=bintree(66);
    root->left->right=bintree(45);
    root->left->left->left=bintree(25);
    printf("printing preorder traversal:\n");
    printPreorder(root);
    printf("printing postorder traversal:\n");
    printPostorder(root);
    printf("printing inorder traversal:\n");
    printInorder(root);
    printf("Height of tree is:%d\n",maxheight(root));
    printf("enter the key to search\n:");
    scanf("%d",&key);
    search(root,key);
    if(flag){
    printf("element %d is found",key);
    }
    else{
        printf("element %d is not found",key);
    }
    insert(root,55);
    printf("\n");
    printInorder(root);
    deletion(root,45);
    printf("\n");
    printInorder(root);
    int m=minvalue(root);
    printf("\nminimum value is %d",m); 
    return 0;
}
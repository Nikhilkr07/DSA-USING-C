#include<stdio.h>
#include<stdlib.h>

typedef struct BST{
    struct BST *left;
    int data;
    struct BST *right;
}bst;

void insert(bst**,int);
void nhlo(bst*,int *);
//void preorder(bst*);

int main(){
    bst *root = NULL;
    int ch,v;
    int *c=0;

    while(1){
        printf("\n1-insert\n2-disp\n3-disppre\n4-exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1:
            printf("Enter data: ");
            scanf("%d",&v);
            insert(&root,v);
            break;

            /*case 2:
            //preorder(root);
            break;*/

            case 3:
            nhlo(root,&c);
            printf("Toral lef node only,  %d",c);
            break;

            case 4:
            exit(0);
        }
    }
}

void insert(bst **rt,int v){
    bst *p = NULL;
    if(*rt == NULL){
        p = (bst*) malloc(sizeof(bst));
        p->data = v;
        p->left = NULL;
        p->right = NULL;
        *rt = p;
        return;
    }
    else{
        if((*rt)->data > v){
            insert(&(*rt)->left,v);
        }
        else if((*rt)->data < v){
            insert(&(*rt)->right,v);
        }
        else{
            printf("Duplicate element is not allowed");
            return;
        }
    }
}

void nhlo(bst *rt, int *c){
    if(rt != NULL){
        if(rt->left != NULL && rt->right == NULL){
            (*c)++;
        }
        nhlo(rt->left,c);
        nhlo(rt->right,c);
    }
}

/*void preorder(bst* rt){
    if(rt != NULL){
        printf("%d  ",rt->data);
        preorder(rt->left);
        preorder(rt->right);
    }
}*/

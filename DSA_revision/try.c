#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *next;
    int data;
};

void insert(struct node **,struct node**);
void disp(struct node*);
void count(struct node*);

int main(){
    struct node * head = NULL, *r = NULL;
    int ch;
    while(1){
        printf("\n1-insert\n2-disp\n3-count");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            insert(&head,&r);
            break;

            case 2:
            disp(head);
            break;

            case 3:
            count(head);
            break;

            case 4:
            exit(0);
        }
    }
    return 0;
}

void insert(struct node ** head, struct node ** r){
    struct node *p = NULL;
    int x;
    p = (struct node*) malloc(sizeof(struct node));
    printf("Enter data ");
    scanf("%d",&x);
    if(p != NULL){
    p->data = x;
    if(*head == NULL && *r == NULL){
        *head = *r = p;
    }
    else{
        (*r)->next = p;
        *r = p;
    }
    (*r)->next = NULL;
    }
}

void disp(struct node *head){
    if(head != NULL){
        while(head != NULL){
            if(head->data %2 != 0){
            printf("%d  ",head->data);
            }
            head = head->next;
        }
        
    }
}

void count(struct node *head){
    int c = 0;
    if(head != NULL){
        while(head != NULL){
            if(head->data %2 != 0){
                c++;
            }
            head = head->next;
        }
        printf("Total no Nodes having odd information is %d ",c);
    }
}
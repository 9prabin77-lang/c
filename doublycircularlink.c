#include<stdio.h>
#include<stdlib.h>

struct Node {
    int info;
    struct Node *next,*prev;
    
};

struct Node *first= NULL;
struct Node *last= NULL;
struct Node *prev= NULL;


void insertfirst(int data){
    struct Node *newnode=(struct Node *)malloc(sizeof(struct Node));
    newnode->info=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    
    if(first==NULL){
        first=last=newnode;
    }
    else{
        newnode->next=first;
        first->prev=newnode;
        first=newnode;
        last->next=first;
        first->prev=last;
    }
}

void insertlast(int data){
	struct Node *newnode=(struct Node *)malloc(sizeof(struct Node));
    newnode->info=data;
    newnode->next=NULL;
    
    if(last==NULL){
        first=last=newnode;
    }
    else{
        last->next=newnode;
        newnode->prev=last;
        last=newnode;
        last->next=first;
        first->prev=last;
    }
	
}

void deletefirst(){
	if(first==NULL){
		printf("emptylist");
	}
	else if(first==last){
		free(first);
		first=last=NULL;
	}
	else{
		struct Node *temp=first;
		first=first->next;
		free(temp);
		first->prev=NULL;
		last->next=first;
        first->prev=last;
	}
}

void deletelast(){
	if(first==NULL){
		printf("emptylist");
	}
	else if(first==last){
		free(last);
		first=last=NULL;
	}
	else{
		struct Node *temp=last->prev;
		
		free(last);
		last=temp;
		last->next=NULL;
		last->next=first;
        first->prev=last;
	}
}

void display(){
    struct Node *temp=first;
    if(first==NULL){
        printf("Empty List");
    }
    else{
        while(temp!=last){
            printf("%d ",temp->info);
            temp=temp->next;
        }
        printf("%d ",temp->info);
    }
}

int main(){

   
    insertfirst(23);
    insertfirst(20);
    insertfirst(24);
    
    
    insertlast(100);
    insertlast(1);
    display();
    printf("\n");
    
    deletefirst();
    display();
    printf("\n");
    deletelast();
    display();
    return 0;
    
}


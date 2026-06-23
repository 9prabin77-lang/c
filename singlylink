#include<stdio.h>
#include<stdlib.h>

struct Node {
    int info;
    struct Node *next;
};

struct Node *first= NULL;
struct Node *last= NULL;

void insertfirst(int data){
    struct Node *newnode=(struct Node *)malloc(sizeof(struct Node));
    newnode->info=data;
    newnode->next=NULL;
    if(first==NULL){
        first=last=newnode;
    }
    else{
        newnode->next=first;
        first=newnode;
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
        last=newnode;
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
		struct Node *temp=first;
		
		while(temp->next!=last){
			temp=temp->next;
		}
		
		free(last);
		last=temp;
		last->next=NULL;
	}
}

void display(){
    struct Node *temp=first;
    if(first==NULL){
        printf("Empty List");
    }
    else{
        while(temp!=NULL){
            printf("%d ",temp->info);
            temp=temp->next;
        }
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


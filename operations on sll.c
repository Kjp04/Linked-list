/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


struct node{
	int data;
	struct node *next;
};
struct node *head;


void create(){
    struct node *temp,*newnode;
int i,n,ch;
// scanf("%d",&n);
   while(ch){

newnode= (struct  node*)malloc(sizeof(struct node));
printf("\n Enter the data \n");
scanf("%d",&newnode->data);

newnode->next=NULL;
if(head==0){
    temp=head=newnode;
}
	else{
	    
	    
	   
	    temp->next=newnode;
	    temp=newnode;
	}
printf("Do you wish to continue [1/0]: ");
        scanf("%d", &ch);
	
}
}


void reverse(){
	struct node *temp, *prev=NULL, *next=NULL;
        temp=head;
        while (temp != NULL)
            {
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
            }
        head = prev;
        printf("reverse string is:\n");
        while(head!=NULL)
        {
            printf("%d ",head->data);
            head=head->next;
        }
}


void display()
{        struct node *temp;
     if(head==NULL)
        {
                printf("\n Linked List is empty:\n");
                return;
        }
  else{
      temp=head;
    while (temp != 0) {
        printf("%d", temp->data);
        temp = temp->next;
    }
    printf("\n");
  }
}

void insert_begin(){
    struct node *newnode;
    newnode= (struct  node*)malloc(sizeof(struct node));
printf("\n Enter the data \n");
scanf("%d",&newnode->data);
if(head==0){
    head=newnode;
}
else{
    newnode->next =head;
    head=newnode;
}
}


void insert_end(){
    struct node *newnode,*temp;
    temp=head;
    newnode= (struct  node*)malloc(sizeof(struct node));
printf("\n Enter the data \n");
scanf("%d",&newnode->data);
while(temp->next!=0){
    temp=temp->next;
}
temp->next= newnode;
}


void insert_pos(){
    struct node *newnode,*temp;
    int i=1, pos,count = 0;
    temp=head;
    newnode= (struct  node*)malloc(sizeof(struct node));
printf("\n Enter the data \n");
scanf("%d",&newnode->data);
printf("Enter position");
scanf("%d",&pos);
newnode->next =0;
// while(temp!=0){
//     count++;
//     temp= temp->next;
// }
// if(pos>count){
//     printf("Invalid position");
// }
if(pos==0){
    newnode->next =head;
    head=newnode;
}
else {
    while(i<pos){
        temp= temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next =newnode;
}
}

void delete_begin(){
    struct node *temp;
    if(head==0){
        printf("list is empty");
        exit(1);
    }
    else{
    temp=head;
    head=head->next;
    free(temp);
}

}

void delete_end(){
     struct node *temp, *prevtemp;
     
     if(head==0){
        printf("list is empty");
        exit(0);
    }
    else if(head->next ==0)
        {
                temp=head;
                temp=0;
                printf("\n The deleted element is:%d \t",temp->data);
                free(temp);
        }
    else{
        temp=head;
    while(temp->next!=0){
        
        prevtemp=temp;
        temp=temp->next;
    }
    prevtemp->next =0;
    free(temp);
    }
}


void delete_pos(){
    int i=1 ,pos;
    printf("enter the position");
    scanf("%d",&pos);
    struct node *temp, *nexttemp;
    temp=head;
      if(head==0)
        {
                printf("\n The Linked List is Empty:\n");
                exit(0);
        }
        else{
            if(pos==1){
                head=head->next;
                free(temp);
            }
            else{
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    nexttemp=temp->next;
    temp->next=nexttemp->next;
    free(nexttemp);
}
}
}

int main(){
int choice;
while(1){
    printf("\n Welcome to operations on Singly linked list \n");
    printf("1. Create \n");
    printf("2. Display\n");
    printf("3. Insert at beginning\n");
    printf("4. Insert at end\n");
    printf("5. Insert at specific position\n");
    printf("6. Reverse the list\n");
    printf("7. Delete from beginning\n");
    printf("8. Delete from end\n");
    printf("9. Delete from specific position\n");
    printf("Enter choice");
    scanf("%d",&choice);
    switch(choice)
                {
                        case 1:
                                        create();
                                        break;
                        case 2:
                                        display();
                                        break;
                        case 3:
                                        insert_begin();
                                        break;
                        case 4:
                                        insert_end();
                                        break;
                        case 5:
                                        insert_pos();
                                        break;
                        case 6:
                                        reverse();
                                        break;
                        case 7:
                                        delete_begin();
                                        break;
                        case 8:
                                        delete_end();
                                        break;
                        case 9:
                                        delete_pos();
                                        break;
                        case 10:
                                        exit(0);
                                        break;

                        default:
                                        printf("\n Wrong Choice:\n");
                                        break;
                }
}
return 0;
   
}

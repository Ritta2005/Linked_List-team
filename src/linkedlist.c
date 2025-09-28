#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node*link;
};

struct Node*createNode(int rno){
struct Node*one=(struct Node*)malloc(sizeof(struct Node));
one->data=rno;
one->link=NULL;
return one;
}


int main(){
int myRollNo=50;
int teammate1RollNo=57;
struct Node*head=NULL;
head=createNode(myRollNo);
head->link=NULL;

printf("Roll Numbers in Linked List: ");
head=insertAtEnd(head,teammate1RollNo);

print(head);
return 0;
}
int main(){
int myRollNo=57;
int teammate1RollNo=50;
struct Node*head=NULL;
head=createNode(myRollNo);
head->link=NULL;

printf("Roll Numbers in Linked List: ");
head=insertAtEnd(head,teammate1RollNo);

print(head);
return 0;
}

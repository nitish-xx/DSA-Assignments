#include <iostream>
using namespace std;
 
//you can also use class
struct Node{
	int data;
	Node *next;
};
 

Node *newNode(int val){
	Node *temp = new Node;
	temp->data = val;
	temp->next = NULL;
	return temp;
}
 

 Node *createLinkedList(int n){
 	int a; 
 
 	Node *head = NULL; 
 	Node *tail = NULL; 
 					  
 
 	
 	for(int i=0;i<n;i++){
 		cin>>a; r
 		Node *temp = newNode(a); 
 
 
 		if(head==NULL){
 			head = temp;
 			tail = temp;
 		}
 		else{
 			tail->next = temp; 
 			tail = temp; 
 		}
 	}
 
 	return head;
 }
 
 
void printLinkedList(Node *head){
	while(head!=NULL){
		cout<<head->data<<" "; 	
		head = head->next; 
	}
}
 
int main() {
	// your code goes here
	int n;
	cin>>n;
	Node* head =createLinkedList(n);
	cout<<"printing List: ";
 
	printLinkedList(head);
	return 0;
}

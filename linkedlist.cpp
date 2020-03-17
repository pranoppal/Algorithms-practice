#include <iostream>
using namespace std;

struct Node{
	int data;
	struct Node* next;
};
struct Node* head;
void insert(int d){
	Node* temp = new Node();
	temp -> data = d;
	temp -> next = NULL;
	if(head == NULL){
		head = temp;
	}
	else{
		struct Node* temp1 = head;
		while( temp1 -> next != NULL)
			temp1 = temp1 -> next;
		temp1 -> next = temp;
	}
}
void print(){
	struct Node* temp = head;
	while( temp != NULL ){
		cout<<temp -> data<<" ";
		temp = temp -> next;
	}
}
void deletenum(int num){
	struct Node* temp = head;
	if( temp -> data == num){
		head = temp -> next;
	}
	else{
		while( temp -> next -> data != num)
			temp = temp -> next;
		temp -> next = temp -> next -> next;
	}
	
}

void sorting(){
	int tempData;
	struct Node* temp1 = head;
	struct Node* temp2;
	while( temp1 != NULL){
		temp2 = temp1;
		while(temp2 != NULL){
			if(temp1 -> data > temp2 -> data){
				tempData = temp1 -> data;
				temp1 -> data = temp2 -> data;
				temp2 -> data = tempData;
			}
			temp2 = temp2 -> next;
		}
		temp1 = temp1 -> next;
	}
}
int main() {
	// your code goes here
	head = NULL;
	insert(2);
	insert(4);
	insert(6);
	insert(8);
	insert(1);
	insert(3);
	print();
	cout<<"\n";
	deletenum(2);
	print();
	cout<<"\n";
	sorting();
	print();
	return 0;
}






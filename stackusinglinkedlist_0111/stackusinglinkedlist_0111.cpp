#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node() {
		next = NULL;
	}
};

class stack {
private:
	Node* top; 

public:
	stack() {
		top = NULL; 
	}

	int push(int value) {
		Node* newNode = new Node();
		newNode->data = value; 
		newNode->next = top;
		top = newNode;
		cout << "Push value:" << value << endl;
		return value;
	}

	void pop() {
		if (isEmpty()) {
			cout << "Stack is empty." << endl;
		}
		cout << "popped value:" << top->data << endl;
		top = top->next;
		}

	void peek(){
		if (top == NULL) {
			cout << "List is empty." << endl;
		}
		else {
			Node* current = top;
			while (current != NULL) {
				cout << current->data << " " << endl;
				current = current->next;
			}
			cout << endl;
		}
	}
}



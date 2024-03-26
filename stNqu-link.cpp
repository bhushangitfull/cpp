#include<iostream>

struct Node{

	int data;

	Node* next;
};

class Stack{
	Node* top;

	public:
		Stack(){
			top=NULL;
		}

		void push(int element){

			Node* newNode = new Node();
			newNode->data=element;
			newNode->next=top;
			top = newNode;
		}

		void pop(){
			Node* temp = top;

			int data = temp->data;
			top=top->next;

			delete temp;

			return data;

		}

		void display(){

			Node* temp = top;

			while(temp!=NULL){
				cout<< temp->data<<endl;
				temp = temp->next;
			}
		}

};


class Queue {
    Node* front, *rear;

public:
    Queue() { front = rear = NULL; }

    bool isEmpty() { return front == NULL; }

    void insert(int val) {
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = NULL;
        if (isEmpty()) front = rear = newNode;
        else rear->next = newNode;
        rear = newNode;
    }

    int remove() {
        if (isEmpty()) {
            std::cout << "Queue Underflow\n";
            return -1;
        }
        Node* temp = front;
        int data = temp->data;
        front = front->next;
        if (front == nullptr) rear = NULL;
        delete temp;
        return data;
    }

	void display(){

		Node* temp = front;

		while(temp!=NULL){
			cout<< temp->data<<endl;
			temp=temp->next;

		}
	}


};



int main(){

		Stack s1;
		s1.push(10);
		s1.push(20);
		s1.display();




return 0;
}

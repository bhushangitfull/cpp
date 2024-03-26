#include<iostream>

using namespace std;

//Using array
class Stack{

	int array[100];
	int top;
	public:
		Stack(){ top = -1;}
		void push(int element){

			array[++top]=element;

		}
		int pop(){
			return array[top--];
		}


		void display(){
			for(int i= top; i>=0; i--){
				cout<<array[i]<<endl;
			}
		}


};

class Queue{

	int arr[10];
	int front, rear;

	public:
		Queue(){ front=rear=-1;}

		void insert(int element){
			arr[++rear]= element;
		}

		int remove(){

			int temp = arr[front];
			if(front == rear) {
				front = rear = -1;
			}else{
				front++;
			}

			return temp;
		}

		void display(){
			for(int i=front+1; i<=rear; i++){
				cout<<arr[i]<<endl;
			}
		}

};


int main(){

	Stack st1;
	Queue qu1;
	cout<<"These are stack elements:"<<endl;
	st1.push(10);
	st1.push(20);
	st1.display();

	cout<<endl;
	cout<<"These are queue elements:"<<endl;
	qu1.insert(25);
	qu1.insert(26);
	qu1.insert(27);

	qu1.display();

	return 0;
}

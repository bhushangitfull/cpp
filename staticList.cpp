#include <iostream>

using namespace std;

struct Node{
	int data;
};


class Staticlist{

	static const int max_size = 10;
	Node item[max_size];
	int count;

	public:
		Staticlist(){
			count = 0;
		}

		bool isFull(){
			return count == max_size;

		}
		bool isEmpty(){
			return count == 0;
		}

		void add(int data){
			if(isFull()){
				cout<<"The list is full"<<endl;
				return;
			}

			item[count].data=data;
			count++;
		}


		void display(){
			if(isEmpty()){
				cout<<"The list is empty"<<endl;
				return;
			}

			for(int i=0; i<count; i++){
				cout<<item[i].data<<endl;
			}
		}
};

int main(){
	Staticlist list1;

	list1.add(1);
	list1.add(2);

	list1.display();


	return 0;
}


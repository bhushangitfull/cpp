#include<iostream>
#include <string>

using namespace std;

struct Product{

	string name;
	int id;
	int price;
};

class ProductList{

	int count;
	static const int max_size= 20;
	Product items[max_size];

	public:
		ProductList(){
			count = 0;
		}

		void addProduct(const Product& product){
			if(count == max_size){
				cout<<"The list is full"<<endl;
			}
			items[count] = product;
			count++;
		}

		void display(){
			if(count == 0){
				cout<<"The list is empty"<<endl;
			}
			for(int i=0; i<count; i++){
				const Product& product = items[i];
				cout<<"Id: "<<product.id<<" "<<"Name: "<<product.name<<" "<<"Price: "<<product.price<<endl;

			}

		}


};


int main(){

	ProductList list1;

	Product product1 = {"product1", 22, 223};

	list1.addProduct(product1);

	list1.display();

}

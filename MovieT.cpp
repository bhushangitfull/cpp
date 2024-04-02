#include<iostream>
#include<string.h>


using namespace std;
class Movie{

	//string movie[]={"movie1", "movie2","movie3"};
	 int adPrice = 200;
	 int chPrice = 150;
	float charity;
	int adCount;
	int chCount;
	int total;
	public int getData(){
		std::cout<<"Price for Adult Tickets: "<<adPrice<<std::endl;
		std::cout<<"Price for Children Tickets: "<<chPrice<<std::endl;
		std::cout<<"Choose tickets for movie:"<<std::endl;
		std::cout<<"Enter how many adult tickets you need: "<<std::endl;
		std::cin>>this -> adCount;
		std::cout<<"Enter how many children tickets you need: "<<std::endl;
		std::cin>>this -> chCount;
		std::cout<<"Enter how many percent you will donate to charity:"<<std::endl;
		std::cin>>this -> charity;

		return 0;
	}

	public int calTotal(){
		this -> total = (adCount*adPrice)+(chCount*chPrice);
		return 0;
	}

	public int showData(){
		std::cout<<"Total adut tickets you booked"<<this -> adCount<<std::endl;
		std::cout<<"Total children ticket you booked"<<this -> chCount<<std::endl;
		std::cout<<"Your total is : "<<this -> total<<std::endl;

		return 0;
	}


};

int main(){

	Movie m1;
	m1.getData();
	m1.calTotal();
	m1.showData();

}

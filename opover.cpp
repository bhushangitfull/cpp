#include<iostream>
#include<string>
#include<vector>
using namespace std;

class YoutubeChannel{

	string name;
	public:

		YoutubeChannel(const string& name ):name(name){}

		string getName(){
			return name;
		}

};


class SubsList{
	vector<YoutubeChannel>subscribers; 

public:


	SubsList& operator+(const YoutubeChannel& channel){
		subscribers.push_back(channel);
		return *this;
	}

	void display(){

		for(int i=0; i<subscribers.size(); i++){
			YoutubeChannel& channel = subscribers[i];
			cout<<channel.getName()<<endl;
		}
	}
};


int main(){

	YoutubeChannel channel1("MKBHD");
	YoutubeChannel channel2("Jhonny Ravis");

	SubsList list1;

	list1= list1 + channel1 + channel2;

	list1.display();

	return 0;
}

#include <iostream>

#include<iomanip>

using namespace std;

int main(){


	int roll;
	//setw() && setfill()
	cout<<"Enter Your rollno.: "<<endl;
	cin>>roll;
	cout<<setw(10)<<setfill('0')<<roll<<endl;
	
	//setprecision
	
	float pi =  3.14579;	
	
	
	cout<<"value of pi : "<<setprecision(3)<<pi<<endl;
	
	
	//setbase()

	int num1 = 23;
	cout<<"octal form of "<<num1<<":  "<<setbase(8)<<num1<<endl;
	cout<<"hexadecimal form of "<<num1<<": "<<setbase(16)<<num1<<endl;
	
	
	//setioflag

	
	return 0;
}
















































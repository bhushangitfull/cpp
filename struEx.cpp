#include<iostream>


using namespace std;

struct person{
	char name[30];

	char gender[10];
	
	int age;
};

struct student{
	
	person p;
	
	int rollN;
	
	char dept[50];
	
	float prevMarks;

};


int main(){

	
	

	struct student s1;

	cout<<"Enter student information:\n"<<endl;
	
	cout<<"Enter name: "<<endl;
	cin>>s1.p.name;

	cout<<"\n Enter gender:"<<endl;
	cin>>s1.p.gender;
	
	cout<<"\n Enter age:"<<endl;
	cin>>s1.p.age;
	
	cout<<"\n Enter student rollnumber:"<<endl;
	cin>>s1.rollN;
	
	cout<<"\n Enter Department of student:"<<endl;
	cin>>s1.dept;
	
	cout<<"\n Enter previous semester marks of the student:"<<endl;
	cin>>s1.prevMarks;

	cout<<"\nEntered student data:"<<endl;
	cout<<s1.p.name<<endl;
	cout<<s1.p.gender<<endl;
	cout<<s1.p.age<<endl;
	cout<<s1.rollN<<endl;
	cout<<s1.dept<<endl;
	cout<<s1.prevMarks<<endl;
	
	
	 


	return 0;
}

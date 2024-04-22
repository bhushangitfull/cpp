#include<iostream>

using namespace std;

class Complex{

double real, imag;

public:
	Complex(): real(0), imag(0){};

	Complex(double real, double imag): real(real), imag(imag){};

	Complex operator + (const Complex& other) const{
		return Complex(real + other.real, imag + other.imag);
	}

	Complex operator - (const Complex& other) const{
		return Complex(real - other.real, imag - other.imag);
	}

	friend ostream& operator <<(ostream& os, const Complex& complex){
		os<<complex.real;

		if(complex.imag > 0){
			os<<" + "<<complex.imag<<"i";
		}else if(complex.imag<0){
			os<<" - "<<complex.imag<<"i";
		}

		return os;
	}



};



int main(){

	Complex c1(4, 5);
	Complex c2(7, 8);

	Complex sum = c1 + c2;
	Complex diff = c1 -  c2;
	cout<<"c1 = "<<c1<<endl;
	cout<<"c2 = "<<c2<<endl;
	cout<<"c1 + c2 = "<<sum<<endl;
	cout<<"c1 - c2 = "<<diff<<endl;
}




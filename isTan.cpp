#include<iostream>
#include<cmath>
using namespace std;




class Point{


public :
	int x, y;

	Point(int x, int y): x(x), y(y){}


};


class Circle{

int radius;
int centerX, centerY;

public:

	Circle(int radius, int centerX, int centerY): radius(radius), centerX(centerX), centerY(centerY){};

	bool isTangent(int x, int y){
		int distanceFromCenter = sqrt(pow(x - centerX,2)+pow(y-centerY, 2));

		return distanceFromCenter ==  radius;
	}



	bool isTangent(const Point& point){
		int distanceFromCenter = sqrt(pow(point.x -centerX,2) + pow(point.y - centerY,2));

		return distanceFromCenter == radius;
	}


};






int main(){

	Circle c1(5, 0, 0);

	if(c1.isTangent(5, 8)){
		cout<<"circle is tangent";
	}else{
		cout<<"circle is not tangent";
	}


}

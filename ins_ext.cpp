#include<iostream>
using namespace std;

class Point {
private:
  int x;
  int y;

public:
  Point(int x = 0, int y = 0) : x(x), y(y) {}


  friend ostream& operator<<(ostream& os, const Point& point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
  }

  friend istream& operator>>(istream& is, Point& point) {
    char c;
    is >> c;
    if (c != '(') {
      is.setstate(std::ios_base::failbit);
      return is;
    }
    is >> point.x >> c;
    if (c != ',') {
      is.setstate(std::ios_base::failbit);
      return is;
    }
   is>>point.y>>c;
	if(c !=')'){
		is.setstate(ios_base::failbit);
		return is;
	}
	return is;
 }

};


int main(){

	Point p1(4, 5);
	Point p2;
	cout<<p1<<endl;
	cin>>p2;
	cout<<p2;

return 0;
}

#include<iostream>
#include<string>
#include"Point.h"
using namespace std;

class Square{
private:
	 Point p0, p1, p2, p3;

public:
	Square(){}
	Square(double x, double y, double a):
		p0(x,y), p1(x+a,y), p2(x+a, y+a), p3(x, y+a){}

	
	~Square(){}

	double Circumference()const{
		return p0.Distance(p1)+p1.Distance(p2)+p2.Distance(p3)+p3.Distance(p0);
	}
	
	double Area()const{
		return p0.Distance(p1)*p1.Distance(p2);
	}

};

int main(){
	Square kwadrat(1,2,5);
	cout<<kwadrat.Circumference()<<endl;
	cout<<kwadrat.Area()<<endl;
}

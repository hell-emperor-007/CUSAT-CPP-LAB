#include <iostream>
#include <cmath>

void area(int length,int breadth){
	int area;
	area=length*breadth;
	std::cout<<"\nThe Area of the Rectangle is "<<area;
}

void area(int side){
	int area;
	area=side*side;
	std::cout<<"\nThe Area of the Square is "<<area;
}

void area(float radius){
	float area;
	area=3.14*radius*radius;
	std::cout<<"\nThe Area of the Circle is "<<area;
}

void area(float height,float base1,float base2){
	float area;
	area=0.5*(height*(base1+base2));
	std::cout<<"\nThe Area of the Trapezium is "<<area;
}

void area(int side1,int side2,int side3){
	float area;
	float s=(side1+side2+side3)/2;
	area=std::sqrt(s*(s-side1)*(s-side2)*(s-side3));
	std::cout<<"\nThe Area of the Triangle is "<<area;
}

int main() {
	int l,b;
	std::cout<<"\n\nEnter the Length & Breadth of Rectangle\n";
	std::cin>>l>>b;
	area(l, b);

	float radius;
	std::cout<<"\n\nEnter the Radius of the Circle\n";
	std::cin>>radius;
	area(radius);

	float height,base1,base2;
	std::cout<<"\n\nEnter the Height and Bases of Trapezium\n";
	std::cin>>height>>base1>>base2;
	area(height, base1, base2);

	int side1,side2,side3;
	std::cout<<"\n\nEnter the Sides of Triangle\n";
	std::cin>>side1>>side2>>side3;
	area(side1, side2, side3);

	int side;
	std::cout<<"\n\nEnter the Side of the Square\n";
	std::cin>>side;
	area(side);

	return 0;
}
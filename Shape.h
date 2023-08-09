#pragma once
#include <string>
#include <iostream>
using namespace std;
class Shape
{
private:
	string color;
	string name;
	int age;
public:
	Shape(string c,string n,int a) {
		color = c;
		name = n;
		age = a;
	}
	
	Shape(string c) {
		color = c;
	}

	/*virtual int area() = 0;
	virtual void draw() = 0;
	virtual void erase() = 0;
	virtual void display() final
	{
		cout << "jkvfhj" << "\n";
	}*/
	friend void print(Shape p1);
	friend class printclass;
	
};


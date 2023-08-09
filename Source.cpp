#include <string>
#include <iostream>
#include "Shape.h"
#include "Reatangle.h"
using namespace std;
void print(Shape p1) {
	cout << "name : " << p1.name << "\t";
	cout << "color : " << p1.color << "\t";
	cout << "age : " << p1.age << "\t";
}
class printclass
{
public:
	void print(Shape p1) {
		cout << "name : " << p1.name << "\t";
		cout << "color : " << p1.color << "\t";
		cout << "age : " << p1.age << "\t";
	}
private:

};
int main() {

	//Shape s;
	//Reatangle r1(10, 7, "fhg");
	Shape g("fady", "red",20);
	print(g);
	cout << "=================" << "\n";
	printclass pc;
	pc.print(g);
}
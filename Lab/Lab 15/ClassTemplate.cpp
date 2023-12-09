#include <iostream>
using namespace std;

template <class T>
class Multiplication{
	
T a;
T b;
public:
	void add(){
		cout<<"Enter a First Number: ";
		cin>>this->a;
		cout<<"Enter a Second Number: ";
		cin>>this->b;
	}
	void display(){
		cout<<"Multiplication of Two Number is: "<<a*b<<endl;
	}
};


int  main(){
	Multiplication<int> obj1;
	obj1.add();
	obj1.display();
	return 0;
}

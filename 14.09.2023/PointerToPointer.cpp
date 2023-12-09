#include <iostream>

using namespace std;


int main(){
	
	int a=5;
	int *b=&a;
	int **c=&b;
	cout<<"Value of a: "<<a<<endl;
	cout<<"Address of a: "<<&a<<endl;
	cout<<"Value of b: "<<*b<<endl;
	cout<<"Address of b: "<<b<<endl;
	cout<<"Value of c: "<<**c<<endl;
	cout<<"Addres of c pointer pointing to b is: "<<*c<<endl;
	cout<<"Value of c: "<<c<<endl;
	
}

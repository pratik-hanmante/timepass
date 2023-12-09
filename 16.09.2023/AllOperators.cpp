#include <iostream>

using namespace std;

void ArithmeticOperator(int a,int b){
	cout<<"Addition of Two operends is : "<<a+b<<endl;
	cout<<"Subtraction of Two operends is : "<<a-b<<endl;
	cout<<"Division of Two operends is : "<<a/b<<endl;
	cout<<"Multiplicaton of Two operends is : "<<a*b<<endl;
	cout<<"Modulo of Two operends is : "<<a%b<<endl;
	cout<<"Increment : "<< a++ << ++a <<endl;
}


int main(){
	
	 int a,b;
	 cout<<"Enter a two numbers: ";
	 cin>>a>>b;
	 
	 ArithmeticOperator(a,b);
	 
}

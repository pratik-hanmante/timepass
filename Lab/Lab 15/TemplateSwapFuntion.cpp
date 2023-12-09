#include <iostream>
using namespace std;

template <class T> void swapFun(T& a,T& b){
	
	T temp=a;
	a=b;
	b=temp;
	
	
}

int main(){
	int a,b;
	cout<<"Enter a Integer Values: ";
	cin>>a>>b;
	
	swapFun(a,b);
	cout<<a<<" "<<b<<endl;
	
	
	float c,d;
	cout<<"Enter a Float Values: ";
	cin>>c>>d;
	
	
	swapFun(c,d);
	cout<<c<<" "<<d<<endl;
	
	return 0;
	
	
	
}

#include <iostream>

using namespace std;

void add(int a=10,int b=20,int c=30,int d=40){
	cout<<"Default Parameters are in Action: "<<a+b+c+d<<endl;
}

int main(){
	
	add(1);
	add(1,2);
	add(1,2);
	add(1,2,3,4);
	return 0;
	
}

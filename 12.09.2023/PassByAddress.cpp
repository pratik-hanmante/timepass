#include <iostream>
using namespace std;


void swapValues(int *p,int *q){
	
	int temp=*p;
	*p=*q;
	*q=temp;
	
	cout<<"Swaping the values in the funtions: "<<*p<<" "<<*q<<endl;
}


int main(){
	
	int a,b;
	cin>>a>>b;
	cout<<"Before swapping values: "<<a<<" "<<b<<endl;
	swapValues(&a,&b);
	cout<<"After swapping values: "<<a<<" "<<b<<endl;
	return 0;
}

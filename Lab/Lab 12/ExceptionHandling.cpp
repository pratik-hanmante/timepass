#include <iostream>
using namespace std;

float Divison(int n,int n1){
	if(n1==0){
		throw"Attempted to divide by zero";
	}
	return n/n1;
}

int main(){
	
	int n1,n2;
	cout<<"Enter a number: ";
	cin>>n1>>n2;
	
	float k;
	
	try{
		k=Divison(n1,n2);
		cout<<k<<endl;
	}catch(const char* err){
		cout<<err<<endl;
	}
	cout<<"ENd of Program"<<endl;
}

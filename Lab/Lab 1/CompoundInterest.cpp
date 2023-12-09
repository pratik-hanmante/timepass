#include <iostream>
#include <math.h>
using namespace std;



int main(){
	
	float rate, year, principal;
	
	cout<<"Enter a Principal Amount: ";
	cin>>principal;
	cout<<endl;
	
	cout<<"Enter rate: ";
	cin>>rate;
	cout<<endl;
	
	cout<<"Enter year: ";
	cin>>year;
	cout<<endl;
	
	cout<<"Compouned Interest: "<<((principal*pow(1+(rate/100),year))-principal)<<endl;
	return 0;
	
	
}

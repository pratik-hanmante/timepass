#include <iostream>
using namespace std;

void local(int a){
	
   a++;
   cout<<"value inside the local function is :  "<<a<<endl;
   
	
}



int main(){
	
	int a;
	cin>>a;
	cout<<"value inside  main function is : "<<a<<endl;
	local(a);
	cout<<"value inside main function after calling local funtion the function is : "<<a<<endl;
	
}

#include <iostream>
using namespace std;

void swapNumbers(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}


int main(){
	
	int a,b;
	cout<<"Enter a two numbers: ";
	cin>>a>>b;
	cout<<"Before Swapping the Numbers "<<a<<" "<<b<<endl;
	swapNumbers(a,b);
	cout<<"After Swapping the Numbers "<<a<<" "<<b<<endl;
	
}

#include <iostream>
using namespace std;


int main(){
	
	int base,exponent;
	cout<<"Enter a base value and exponent Value: ";
	cin>>base>>exponent;
	
	int ans=1;
	for(int i=1;i<=exponent;i++){
		ans*=base;
	}
	
	cout<<ans<<endl;
	return 0;
}

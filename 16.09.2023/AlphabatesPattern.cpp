#include <iostream>

using namespace std;


int main(){
	
	
	int row;
	cout<<"Enter a how many rows you want: ";
	cin>>row;
	
	char ch='A';
	
	for(int i=1;i<=row;i++){
		for(int j=1;j<=i;j++){
			cout<<ch<<" ";
		}
		cout<<endl;
		ch=ch+1;
	}
	
	
	return 0;
}

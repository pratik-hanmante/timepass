#include <iostream>
using namespace std;



int main(){
	int row;
	cout<<"Enter a number of row: ";
	cin>>row;
	
	char ch='A';
	
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row-i+1;j++){
			cout<<ch<<" ";
		}
		cout<<endl;
		ch+=1;
	}
	return 0;
}

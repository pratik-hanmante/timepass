#include <iostream>
using namespace std;



int main(){
	int line,dubline;
	cout<<"Enter how many lines you want to print: ";
	cin>>line;
	dubline=line;
	while(dubline!=0){
		cout<<"*"<<" ";
		dubline--;
	}
	return 0;
}

#include <iostream>
using namespace std;





int main(){
	int range;
	cout<<"Enter a range: ";
	cin>>range;
	
	for(int i=2;i<range;i++){
		bool flag=false;
		for(int j=2;j<i;j++){
			if(i%j==0){
			   flag=true;
			   break;
			}
		}
		if(flag){
			cout<<i<<" ";
			cout<<"Not Prime"<<endl;
		}
		else{
			cout<<i<<" ";
			cout<<"Prime"<<endl;
		}
	}
	return 0;
}

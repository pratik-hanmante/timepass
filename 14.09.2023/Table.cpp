#include <iostream>

using namespace std;
void loopHorizontal(int a){
	int b=a;
	while(b!=0){
		cout<<"-"<<" ";
		b--;
	}
}
void loopVertical(int a){
	int b=a;
	while(b!=0){
		cout<<"|"<<" ";
		cout<<endl;
		b--;
	}
}

int main(){
	
	int dash;
	cout<<"enter a dash you want: "<<endl;
	cin>>dash;
	
	
	loopHorizontal(dash);
	cout<<endl;
	cout<<"DataTypes |"<<"   "<<"Sizes"<<endl;
	
	loopHorizontal(dash);
	cout<<endl;
	cout<<"Integer   |"<<"   "<<sizeof(int)<<endl;
	loopHorizontal(dash);
	cout<<endl;
	cout<<"Float     |"<<"   "<<sizeof(float)<<endl;
	loopHorizontal(dash);
	cout<<endl;
	cout<<"Char      |"<<"   "<<sizeof(char)<<endl;
	loopHorizontal(dash);
	cout<<endl;
	cout<<"Double    |"<<"   "<<sizeof(double)<<endl;
	
}

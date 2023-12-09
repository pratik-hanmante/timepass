#include <iostream>
using namespace std;


class Time{
	int hour,min,sec;
	
	public:
		Time(int h,int m,int s){
			this->hour=h;
			this->min=m;
			this->sec=s;
		}
		
		
		friend void operator+(Time&,int);
		friend void operator-(Time&,int);
		
		
		void display(){
			cout<<hour<<" : "<<min<<" : "<<sec<<endl;
		}
		
		
};

void operator+(Time& obj1,int a){
	obj1.hour+=a;
	obj1.min+=a;
	obj1.sec+=a;
}
void operator-(Time& obj1,int b){
	obj1.hour-=b;
	obj1.min-=b;
	obj1.sec-=b;
}

int main(){
	
	
	int h,m,s;
	cout<<"enter respective values for hour min and sec \n";
	cin>>h>>m>>s;
	Time obj1(h,m,s);
	obj1.display();
	obj1+1;
	obj1.display();
	obj1-1;
	obj1.display();
	return 0;
} 

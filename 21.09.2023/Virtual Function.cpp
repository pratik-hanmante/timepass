#include <iostream>
using namespace std;




class name{
	
	public:
		virtual void fun()=0;
		void display(){
			cout<<"display funtion called"<<endl;
		}
};


class firstName: public name{
	
	public:
		void fun(){
			cout<<"Virtual function called"<<endl;
		}
		void show(){
			name::display();
			cout<<"show called"<<endl;
		}
	
	
};


int main(){
	//name* obj1=new firstName();
	//obj1 -> display();
	
	firstName obj1;
	obj1.show();
	
	
	
	
	return 0;
}

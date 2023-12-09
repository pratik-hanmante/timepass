#include <iostream>

using namespace std;

class complex{
	int real,img;
	
	public:
	   complex(int r,int i){
	   	  real=r;
	   	  img=i;
	   }
	   
	   void show(){
	   	  cout<<real<<"+"<<img<<"i"<<endl;
	   	  
	   }
};

int main(){
	
	complex obj1(10,12);
	obj1.show();
	complex obj2(obj1);
	obj2.show();
	return 0;
	
}

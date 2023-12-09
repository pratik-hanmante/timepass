#include <iostream>
#include <string.h>
using namespace std;

class complex{
	
	
	int id;
	char name[50];
	
 static float rate;
	
	public:
	
	   
		complex(int i,char* str){
			
			id=i;
			strcpy(name,str);
			
		}
		
	   void getData(){
	   	  cout<<id<<" "<<name<<endl;
	   }
	    
	    static float getInterset(){
	    	return rate;
		}
	
};

float complex::rate=9.2;
 

int main(){
	
	complex obj1(1,"Kunal");
	obj1.getData();
cout<<"Interse Rate is  "<<complex :: getInterset()<<endl;
	complex obj2(2,"Shubham");
	obj2.getData();
	cout<<"Interse Rate is "<<complex::getInterset();
	return 0;
	
	
	
}

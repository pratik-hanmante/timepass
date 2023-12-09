#include <iostream>
#include <string.h>

using namespace std;

class name{
	int len;
	char* personName;
	
	public:
	   name(char* name1){
	   	  this->len=strlen(name1);
	   	  personName=new char[this->len+1];
	   	  strcpy(this->personName,name1);
	   	  
	   }
	   
	   void show(){
	   	  cout<<"Name of the person who address is "<<this<<" is "<<this->personName<<endl;
	   	  
	   }
	   
	   name(name& obj1){
	   	cout<<"UserDefined Copy Constructor Called"<<endl;
	   	this->len=obj1.len;
	   	personName=new char[this->len+1];
	   	strcpy(this->personName,obj1.personName);
	   	 
	   }
};


int main(){
	name obj1("kunal"); 
	obj1.show();
	cout<<"Address of object1 is: "<<&obj1<<endl;
	name obj2(obj1);
	obj2.show();
	cout<<"Address of object1 is: "<<&obj2<<endl;

return 0;
	
}

#include <iostream>
#include <string.h>

using namespace std;

class name{
	int len;
	char* personName;
	
	public:
		name(char* name1){
			cout<<"Constructor Called"<<endl;
			this->len=strlen(name1);
			personName=new char[this->len+1];
			strcpy(this->personName,name1);
		}
		
		void show(){
			cout<<"Name is: "<<personName<<endl;
			cout<<"Length of Name is: "<<len<<endl;
		}
		
		
		name(name& obj1){
			cout<<"User Defined Copy Constructor Called "<<endl;
			this->len=obj1.len;
			this->personName=new char[this->len+1];
			strcpy(this->personName,obj1.personName);
			
		}
		
		~name(){
			cout<<"Destructor Called "<<this<<endl;
			if(personName){
				delete[] personName;
				
			}
			personName=NULL;
		}
};

int main(){
	
	name obj1("kunal");
	obj1.show();
	cout<<"Address of Obj1 is: "<<&obj1<<endl;
	{
	 name obj2(obj1);
	 obj2.show();
	 cout<<"Address of Obj2 is: "<<&obj2<<endl;
	}

	 
	
	
	obj1.show();

	
	return 0;
	
}

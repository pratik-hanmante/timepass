#include <bits/stdc++.h>


using namespace std;



class Library{
	
	protected:
	char name[50];
	
	public:
		Library(const char* name){
			strcpy(this->name,name);
		}
		void display(){
			cout<<"Library Name is: "<<name<<endl;
		}
	
};

class Distributer:virtual public Library{
	
	char disName[50];
	public:
		Distributer(const char* disName):Library(name){
			strcpy(this->disName,disName);
		}
		void display(){
			
			cout<<"Distributer Name is: "<<disName<<endl;
		}
	
	
};
class Author:virtual public Library{
	
	char authName[50];
	public:
		Author(const char* authName):Library(name){
			strcpy(this->authName,authName);
		}
		void display(){
		
			cout<<"Author Name is: "<<authName<<endl;
		}
	
	
};

class Book: public Distributer,Author{
	
	char bookName[50];
	public:
		Book(const char* bookName,const char* disName,const char* authName,const char* name):Library(name),Author(authName),Distributer(disName){
			strcpy(this->bookName,bookName);
		}
		void display(){
			Library::display();
			Author::display();
			Distributer::display();
			cout<<"Book Name is: "<<bookName<<endl;
		}
	
	
	
	
};



int main(){
	
	Book obj1("Atomic Habits","Kunal","James Clear","IET Library");
	
	obj1.display();
	return 0;
}

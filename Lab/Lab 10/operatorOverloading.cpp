#include <iostream>
using namespace std;

class Student{
	
	int marks1,marks2;
	
	public:
		Student(){
			cout<<"Default Constructor"<<endl;
		}
		Student(int m1,int m2){
			this->marks1=m1;
			this->marks2=m2;
		}
		
		void display(){
			cout<<marks1<<" "<<marks2<<endl;
		}
           
        friend Student operator+(Student&,Student&);
        friend Student operator-(Student&,Student&);
        Student operator++(int);
        Student operator++();
        
        
	
};

Student operator+(Student& obj1,Student& obj2){
	
	Student temp;
	temp.marks1=obj1.marks1+obj2.marks1;
	temp.marks2=obj1.marks2+obj2.marks2;
	return temp;
	
}

Student operator-(Student& obj1,Student& obj2){
	Student temp;
	temp.marks1=obj1.marks1-obj2.marks1;
	temp.marks2=obj1.marks2-obj2.marks2;
	return temp;
}



Student Student:: operator++(int){

this->marks1++;
this->marks2++;
return (*this);

}

Student Student::operator++(){
	++this->marks1;
	++this->marks2;
	return *this;
}

int main(){
	int m1,m2;
	cout<<"Enter a Marks for two subject of Class1: ";
	cin>>m1>>m2;
	
	Student s1(m1,m2);
	s1.display();
	
	int m3,m4;
	cout<<"Enter a Marks for two subject of Class2: ";
	cin>>m3>>m4;
	Student s2(m3,m4);
	s2.display();
	
	cout<<"Operator Overloading for +"<<endl;
	Student s3=s1+s2;
	s3.display();
	
	cout<<"Operator Overloading for -"<<endl;
	s3=s1-s2;
	s3.display();
	cout<<"++ Post Operator is Overloaded"<<endl;
	
	
	s1=s1++;//s1=s1.operator++()
	s1.display();
	
	cout<<"++ Pre Operator is Overloaded"<<endl;
    
    s2=++s2;
    s2.display();
    
    
	
	
return 0;	
	
	
}

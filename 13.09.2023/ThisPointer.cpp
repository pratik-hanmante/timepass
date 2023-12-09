#include <iostream>
using namespace std;

class student {
	
	
	int rollNo;
	int age;
	
	 
	 public:
	 	
	 	student(int a,int b){
	 		rollNo=a;
	 		age=b;
		 }
	 	
	 	void show(){
	 		
	 		cout<<"Address of This Pointer is "<<this<<endl;
	 		cout<<"RollNo of student is "<<this->rollNo<<" and his/her age is "<<this->age<<endl;
		 }
	
	
};

int main(){
	student stu1(12,22);
	cout<<"Address of the Object Stu1 is "<<&stu1<<endl;
	stu1.show();
	return 0;
	
}

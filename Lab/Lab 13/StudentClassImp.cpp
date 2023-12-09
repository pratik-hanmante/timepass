#include <iostream>
#include <iomanip>
using namespace std;


class Student {
	char name[50];
	int rollNo;
	int d,m,y;
	
	public:
		void setData(){
			cout<<"Enter your RollNo: ";
			cin>>this->rollNo;
			cout<<"Enter your name: ";
			cin>>this->name;
			
			cout<<"Enter your Date of Birth: ";
			cin>>d>>m>>y;
		}
		
		void display(){
			cout<<'\n'<<this->rollNo<<"\t"<<this->name<<"\t"<<this->d<<"/"<<this->m<<"/"<<this->y<<endl;
		}
		
		int getRollNo(){
			return this->rollNo;
		}
};


int main(){
	int n;
	cout<<"Enter a no of object you want to create: ";
	cin>>n;
	Student obj1[n];
	
	for(int i=0;i<n;i++){
		obj1[i].setData();
	}

	
	for(int i=0;i<n;i++){
		for(int j=1;j<n;j++){
			if(obj1[j].getRollNo()<obj1[j-1].getRollNo()){
				Student stu=obj1[j-1];
				obj1[j-1]=obj1[j];
				obj1[j]=stu;
				
			}
		}
	}
	
	for(int i=0;i<n;i++){
		
		obj1[i].display();
		cout << setfill ('-') << setw (10)<<endl; 
	}
	
	return 0;
}

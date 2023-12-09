
#include<iostream>
using namespace std;

class Employee
{
int id;
char name[30];
double salary;
public:


void getdata(){
cout << "Enter Id : ";
cin >> id;
cout << "Enter Name : ";
cin >> name;
cout << "Enter Salary : ";
cin >> salary;	
}


void putdata(){
cout << id << " ";
cout << name << " ";
cout << salary << " ";
cout << endl;
}
};


int main()
{

Employee emp[30];
int n;
cout << "Enter Number of Employees  ";
cin >> n;


for(int i = 0; i < n; i++)
{
  emp[i].getdata();
}


cout << "Enter Employee Data  " << endl;
cout<<endl;

for(int i = 0; i < n; i++)
{

	emp[i].putdata();
	cout<<endl;
}
}

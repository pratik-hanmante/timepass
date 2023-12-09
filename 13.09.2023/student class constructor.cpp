#include <iostream>
using namespace std;     
class student
{
	int rno;
	char name[15];
	double fees;
	
	public:
		student()
		{
			cout<<"Roll number:";
			cin>>rno;
			cout<<"student name:";
			cin>>name;
			cout<<"fees:";
			cin>>fees;
			
		}
	void display()
	{
		cout<<rno<<"\t"<<name<<"\t"<<fees;
	}
	
};

int main()
{
	student s;
	s.display();}
	
		
	


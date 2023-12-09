#include <iostream>
#include <string.h>
using namespace std;     
class student
{
	int rno;
	char name[15];
	double fees;
	
	public:
		student(int r,char* str,double fee){
			
		     rno=r;
		     strcpy(name,str);
		     fees=fee;
		
		}
		
			
			
		
	void display()
	{
		cout<<rno<<"\t"<<name<<"\t"<<fees;
	}
	
};

int main()
{
	student s(23,"Shubham",150);
	s.display();
	return 0;
}
	
		

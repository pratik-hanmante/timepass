#include<iostream>
using namespace std;
#include<string.h>

class string1{
	
	int len;
	char *ptr;
	public:
		string1(char *sptr){
			
			len=strlen(sptr);
			ptr=new char[len+1];
			strcpy(ptr,sptr);
		}
		void display(){
			
			cout<<"length is: "<<len<<endl;
			cout<<"String is "<<ptr<<endl;
		}
		~string1(){
			cout<<"Destructor is called ";
			if(ptr)
			delete[] ptr;
			ptr=NULL;
		}
};

int main(){
	
	string1 c("kunal");
	c.display();
	{
		string1 c1(c);
		c1.display();
		c1.~string1();
    }

	c.display();
	

}






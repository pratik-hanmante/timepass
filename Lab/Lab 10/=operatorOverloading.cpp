#include<iostream>
using namespace std;
#include<string.h>
class string1
{
	int len;
	char* str;
	public:
		void display();
		string1(char*);
		string1& operator=(string1&);
	string1(string1&)
	{
			cout<<"copy constructor is called"<<endl;
	}
	
	friend void operator==(string1&,string1&);	
};


void operator==(string1& str1,string1& str2){
	
	if(!strcmp(str1.str,str2.str)){
		cout<<"Two objects are same"<<endl;
	}else {
		cout<<"Two objects are not same"<<endl;
	}
	
}

string1& string1::operator=(string1& s)
{
	cout<<"assignment is called\n"<<endl;
	len=s.len;
	delete[] str;
	str=new char[len+1];
	strcpy(str,s.str);
	return (*this);
}
void string1::display()
{
	cout<<"length is "<<len<<endl;
	cout<<"string is "<<str<<endl;
}
string1::string1(char * sptr)
{
	len=strlen(sptr);
	str=new char[len+1];
	strcpy(str,sptr);
}	

int main()
{


	string1 s1("abc");
	string1 s2("xyz");


//	s1=s2;//s2.operator=(s1)
	
	s1==s2;
	s1.display();
	
//	string1 s5=s2;

}

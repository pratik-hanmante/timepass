#include <iostream>
using namespace std;
class complex
{
	int real;
	int imaginory;
	public:
	complex()
	{
		real=1;
		imaginory=2;
	}
	void show()const
	{
		cout<<"complex no is "<<real<<"+"<<imaginory<<"i"<<endl;
	}
	int getreal()const{
	return real;
	
	}
	void setreal(int r)
	{real=r;
	}
	
	
	
	
};

int main()
{
	const complex c1;
	c1.show();
	//c1.setreal(10);
	complex c2;
	c2.show();
	c2.setreal(10);
	c2.show();
	
}

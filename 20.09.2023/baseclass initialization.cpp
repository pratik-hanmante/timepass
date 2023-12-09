#include<iostream>
using namespace std;
class A

	{
		int a;
		public:
		A()
		{
			cout<<"in default of A \n";
		}
		A (int )
		{
			cout<<"in display of A class \n";
			this->a=a;
		}
		void display()
		{
			cout<<"in display of A class \n";
			cout<<"value if a= "<<a<<endl;
		}
    };

class B: public A
{
	int b;
	public:
		B()
		{
			cout<<"in default of B \n"<<endl;
		}
		B(int b):A(10)
		{
			cout<<"in para B \n"<<endl;
			this->b=b;
		}
		void display ()
		{
			A::display();
			cout<<"in display of B class \n"<<endl;
			cout<<b<<endl;
		}
};
int main()
{
	B bobj;
	bobj.display();
	cout<<sizeof(bobj)<<endl;
}

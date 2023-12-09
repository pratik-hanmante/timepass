#include <iostream>
using namespace std;


int fun()
{
	static int funCalled;
	cout<<funCalled;
	funCalled++;
	return funCalled;
	
}

int main()
{
	
	fun();
	fun();
	fun();
	cout<<"Fun function is called "<<fun()<<" times";
	return 0;
}

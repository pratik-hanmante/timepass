#include <iostream>
using namespace std;

int local(){
	
static int a=0;
cout<<a<<endl;
a++;
return a;
   
	
}



int main(){
	
cout<<"Final value is: "<<local()<<endl;
cout<<"Final value is: "<<local()<<endl;
cout<<"Final value is: "<<local()<<endl;
	
}

#include <iostream>
using namespace std;


class Complex{
	
	int real,img;
	
	public:
		
		void getData(){
			cout<<"Enter a Real and img Number: ";
			cin>>real>>img;
		}
		void display(){
			cout<<real<<"+"<<img<<"i"<<endl;
		}
		
		void setRealNumber(int r){
			real=r;
		}
		
		void setImgNumber(int i){
			img=i;
		}
	
	
};


int main(){
	Complex obj1;
	
	obj1.getData();
	obj1.display();
	int real;
	cout<<"Enter a RealNumber: ";
	cin>>real;
	obj1.setRealNumber(real);
	cout<<"After changing the real number: ";
	obj1.display();
	
	int img;
	cout<<"Enter a ImgNumber: ";
	cin>>img;
	obj1.setImgNumber(img);
	cout<<"After changing the Img number: ";
	obj1.display();
	
	return 0;
	
}

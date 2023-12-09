#include <iostream>


using namespace std;



class shape{
	public:
	virtual void parameters()=0;
	virtual void  area()=0;
	
};


class square: public shape{
	int side;
	public:
		void parameters(){
			cout<<"Enter a value of Side: ";
			cin>>side;
	   }
	   
	   void area(){
	   	  cout<<"Area of Square is: "<< side*side<<endl;
	   }
	   
	  
};

class reactangle: public shape{
	int l,b;
	public:
			void parameters(){
			cout<<"Enter a value of Length and breadth: ";
			cin>>l>>b;
	   }
	   
	   void area(){
	   	  cout<<"Area of Square is: "<< l*b<<endl;
	   }
		
};




int main(){
	
	
	shape* ptr=new square();
	ptr->parameters();
	ptr->area();
	
   shape* ptr1=new reactangle();
   ptr1->parameters();
   ptr1->area();
    
    
    
    
    return 0;
}

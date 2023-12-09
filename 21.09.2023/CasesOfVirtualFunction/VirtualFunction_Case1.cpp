#include <iostream>
using namespace std;

class employee
{
	int id;
	public:

		
		employee(int i)
		{
			cout<<"In para of emplyoee"<<endl;
			id=i;
		} 
        virtual int findSalary(){
        	
        	return 0;
		}
		void display()
		{
			cout<<"Id of an emplyoee is "<<id<<endl;
		}
		
};

class wageEmployee : public employee
{
	int hrs, rate;
	public:
	
		
		wageEmployee(int i,int h ,int r):employee(i)
		{
			cout<<"In para of wage "<<endl;
			hrs=h;
			rate=r;
		}
		
		int findSalary(){
			return hrs*rate;
		}
		
	  void display()
		{
			employee :: display();
			cout<<hrs<<endl;
			cout<<rate<<endl;
		}
		
};

class saleManager : public wageEmployee
{
	int sales, comm;
	public:

		
		
		saleManager(int i ,int h ,int r,int s,int c):wageEmployee(i,h,r)
		{
			cout<<"In para of sales "<<endl;
			sales=s;
			comm=c;
		}
		
		int findSalary()
		{
			return (wageEmployee :: findSalary())+sales*comm;
		}
		void display()
		{
			wageEmployee::display();
			cout<<"Sales of an emp is "<<sales<<endl;
			cout<<"Comm of an emp is "<<comm<<endl;
		}
		
};

int main()
{

        employee *ptr;
        employee e(1);
        ptr =&e;
        cout<<"Salary is: "<<ptr->findSalary()<<endl;
        
        wageEmployee e1(2,5,150);
        ptr =&e1;
        cout<<"Salary is: "<<ptr->findSalary()<<endl;
        
        saleManager sm(3,6,200,50,100);
        ptr =&sm;
        cout<<"Salary is: "<<ptr->findSalary()<<endl;
        
}



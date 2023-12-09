#include <iostream>
using namespace std;


class Tarik{
	
	int day,month,year;
	
	public:
		void display(){
			
			cout<<day<<"/"<<month<<"/"<<year<<endl;
			
		}
		
		void getValues(){
			cout<<"Enter a day month and year: "<<endl;
			cin>>day>>month>>year;
		}
		
		void setDay(int d){
			day=d;
		
		}
		void setMonth(int m){
			month=m;
		
		}
		void setYear(int y){
			year=y;
		
		}
	
	
};

int main(){
	
	Tarik obj1;
	obj1.getValues();
	obj1.display();
	cout<<sizeof(Tarik)<<endl;
	cout<<sizeof(obj1)<<endl;
	int day;
	cout<<"Enter a Day number you want to set: ";
	cin>>day;
	int month;
	cout<<"Enter a Month number you want to set: ";
	cin>>month;
	int year;
	cout<<"Enter a Year number you want to set: ";
	cin>>year;
	obj1.setDay(day);
	cout<<"After changing the Day we got this: ";
	obj1.display();
	obj1.setMonth(month);
	cout<<"After changing the Month we got this: ";
	obj1.display();
	obj1.setYear(year);
	cout<<"After changing the Year we got this: ";
	obj1.display();
	return 0;
	
}

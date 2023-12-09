#include <iostream>
using namespace std;


int main()
{
	int val;
	cout<<"Enter a number: "<<endl;
	cin>>val;
	int evenSum=0,oddSum=0;
	
	for(int i=1;i<=val;i++)
	{
		int evenSum=0,oddSum=0;
		if(i%2==0){
			evenSum+=i;
		}else{
			oddSum+=i;
		}
	}
	
	cout<<"Even number sum is "<<evenSum<<" \nand Odd number sum is "<<oddSum<<endl;
	
}

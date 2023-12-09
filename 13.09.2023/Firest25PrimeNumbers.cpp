#include <iostream>
using namespace std;

bool isPrime(int a)
{
	if(a==2) return true;
	for(int i=2;i<a;i++){
		if(a%i==0){
			return false;
		}
	}
	return true;
}
int main()
{
	
	int n;
	cout<<"Enter a number till that number you want to print Prime Number: "<<endl;
	cin>>n;
	int count=0;
	for(int i=2;count!=25;i++){
		if(isPrime(i)){
			cout<<i<<endl;
			count++;
		}
	}
	return 0;
	
}

#include<iostream>
using namespace std;
int main()
{
	int start,end;
	cout<<"Enter a starting number and ending number for that you want to print sum: ";;
	cin>>start>>end;
	int sum=0;
	for(int i=start;i<=end;i++){
		sum+=i;
	}
	cout<<"Sum of the numbers from "<<start<<" and "<<end<<" = "<<sum<<endl;
	return 0 ;
}

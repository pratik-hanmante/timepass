#include <iostream>
#include <vector>
using namespace std;



int main(){
	int arr[5]={1,2,3,4,5};
	vector<int> vec;
	
	for(int i=0;i<5;i++){
		vec.push_back(arr[i]);
	}
	int n;
	cin>>n;
	vec.push_back(n);
	//vec.pop_back();
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<" ";
	}
	return 0;
}

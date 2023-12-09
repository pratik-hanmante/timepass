#include <iostream>
using namespace std;

void fun(int arr[],int size,int index){
	 
   	
   	  if(index>size){
   	  	throw "Array Index Out of Bound";
	}
   
   arr[index]=0;
   cout<<"Element Update Successfully"<<endl;
}

int main(){
	int size=5;
   int arr[size]={1,2,3,4,5};
   
   int index;
   cout<<"Enter a index for that element you want to make 0: ";
   cin>>index;
   
   try{
   	  
   	  fun(arr,size,index);
   }
  
   catch(const char* err){
   	    cout<<err<<endl;
   	  
   }
   
   cout<<"End of Program"<<endl;
   
	return 0;
	
}

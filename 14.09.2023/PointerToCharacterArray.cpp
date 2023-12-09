#include <iostream>
#include <string.h>

using namespace std;


int main(){
	
	
	char* names[5]={"Kunal","Shubham","Ram","Sham","Deva"};
	
	for(int i=0;i<=4;i++){
		int j=0;
		for(j=0;j<=strlen(*(names+i));j++){
			cout<<*(*(names+i)+j);
			
		}cout<<endl;
	  	
	}
}

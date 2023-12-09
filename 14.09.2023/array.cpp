
#include <iostream>
using namespace std;
int main() {
int n=3;
int arr[n]={1,2,3};
int prev=0,curr=0,next=1;

for(int i=0;i<=n-1;i++){
    if(i==0 && arr[curr]>arr[next]){
        cout<<i<endl;
        prev++;
        curr++;
        next++;
    }else if(arr[curr]>arr[prev] && arr[curr]>arr[next] ){
        cout<<arr[curr]<<" index is: "<<curr<endl;
        prev++;
        curr++;
        next++;
    }
    
}


    return 0;
}

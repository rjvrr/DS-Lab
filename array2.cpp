#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,8,9,10};
    int n=sizeof(arr)/sizeof(0);
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<<i+1<<endl;
            break;
        }
    }
    int sum=0;
    int num=10+1;
    int newsum=10*(num)/2;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<newsum-sum;
    
}
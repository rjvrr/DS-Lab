#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cout<<"enter element"<<endl;
        cin>>arr[i];
    }
    int e,t;
    cout<<"enter index"<<endl;
    cin>>e>>t;
    for(int i=n-1;i>=t;i--){
        arr[i+1]=arr[i];
    }
    arr[t]=e;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"enter index for deletion"<<endl;
    int ind;
    cin>>ind;
    
    for(int i=ind ; i<n+1 ; i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

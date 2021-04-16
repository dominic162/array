/*
    Given a array. Find sum of array elements between l and r. ( 0 <= l <= r <= n-1 )
*/


#include<iostream>
using namespace std;

void prefixsum(int* arr,int n){
    
    for(int i=1; i<n; ++i){
        arr[i]+=(arr[i-1]);
    }

    return ;
}

int getans(int* a, int l, int r){

    if(l!=0){
        return (a[r]-a[l-1]);
    }
    else{
        return a[r];
    }

}

int main(){

    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    
    int* arr = new int[n];
    cout<<"Enter elements: ";
    for(int i=0; i<n; ++i){
        cin>>arr[i];
    }
    
    prefixsum(arr,n);

    int t,l,r,ans;
    cout<<"Enter number of test cases: ";
    cin>>t;

    for(; t>0; t--){
        cout<<"\nEnter l and r: ";
        cin>>l>>r;
        
        ans=getans(arr,l,r);

        cout<<"\nSum of elements in range "<<l<<" to "<<r<<" is "<<ans;
    }

    return 0;
}
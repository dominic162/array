


#include<iostream>
using namespace std;

/*
    Find the max diff between a[j]-a[i] where j >i.
*/

int maxdiff(int* arr, int n){
    int cmin=arr[0],ans=0;
    for(int i=1;i<n;++i){
        ans=max(ans,arr[i]-cmin);
        cmin=min(cmin,arr[i]);
    }
    return ans;
}

/*
    Find the min diff between a[j]-a[i] where j >i.
*/

int mindiff(int* arr,int n){
    int cmax=arr[0],ans=0;
    for(int i=1;i<n;++i){

        ans=min(ans,arr[i]-cmax);
        cmax=max(cmax,arr[i]);

    }

    return ans;
}

int main(){

    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    int* arr=new int[n];
    cout<<"Enter elements of array: ";
    
    for(int i=0;i<n;++i){

        cin>>arr[i];

    }

    int ans=maxdiff(arr,n);
    cout<<"Max diff between arr[j]-arr[i] where j>i is "<<ans<<endl;
    
    ans=mindiff(arr,n);
    cout<<"Min diff between arr[j]-arr[i] where j>i is "<<ans<<endl;

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

void reverseit(vector<int> &vr){

    int start=0,end=vr.size()-1;
    for(; start<end; ){        
        vr[start]=vr[start]^vr[end];
        vr[end]=vr[start]^vr[end];
        vr[start]=vr[start]^vr[end];        
        ++start;
        --end;
    }

    return ;
}

void getans(int* arr,int n, vector<int> &ans){
    int melement=INT_MIN;
    for(int i=n-1; i>=0; --i){
        if(arr[i]>melement){

            melement=arr[i];
            ans.push_back(melement);
        }
    }

    reverseit(ans);

    return ;
}


int main(){

    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    int* arr=new int[n];
    
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; ++i){
        cin>>arr[i];
    }

    vector<int> ans;
    getans(arr,n,ans);

    for(int i=0;i<ans.size(); ++i){
        cout<<ans[i]<<" ";
    }

    return 0;

}
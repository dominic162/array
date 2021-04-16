/*
    Max length of alternating even odd elements subarray
*/

#include<iostream>
using namespace std;

bool check(int a,int b){
    a=a&1;
    b=b&1;
    if(a^b){
        return true;
    }
    return false;
}

int altevenodd(int* arr,int n){

    int ans=0;
    int clen=1;
    for(int i=1;i<n;++i){
        if(check(arr[i],arr[i-1])){
            clen++;
            ans=max(ans,clen);
        }
        else{
            clen=1;
        }
    }

    return ans;
}

int main(){

    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    int* arr=new int[n];
    cout<<"Enter elements: ";

    for(int i=0;i<n;++i){
        cin>>arr[i];
    }

    int ans=altevenodd(arr,n);
    cout<<"Max length of alternating even odd subarray: "<<ans<<endl;

    return 0;
}
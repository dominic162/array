/*
    Given a array find if there exists three element whose sum is equal to a target element;
*/


#include<iostream>
#include<algorithm>
using namespace std;

class solution{

    public:
        int* makearr(int n);

        bool is_sum(int* arr, int n, int target);

};

int* solution::makearr(int n){
    cout<<"Enter elements of array: ";
    
    int* arr = new int[n];
    
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }

    return arr;
}

//fix one element and find sum-element in remaining array using 2 pointer's approach;
bool solution::is_sum(int* arr, int n, int target){ 

    sort(arr,arr+n);

    for(int i=0;i<n-2;++i){
        int rsum=target-arr[i];
        int s=i+1,l=n-1,csum;
        for( ; s<l ; ){
            csum=arr[s]+arr[l];
            if(csum == rsum){
                return true;
            }
            else{
                if(csum<rsum){
                    s++;
                }
                else{
                    l--;
                }
            }
        }
    }

    return false;
};

int main(){
    
    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    
    solution sl;
    int* arr=sl.makearr(n);
    
    int target;
    cout<<"Enter target element: ";
    cin>>target;

    if(sl.is_sum(arr,n,target)){
        cout<<"Three element exists whose sum is equal to target";
    }
    else{
        cout<<"Three element doesn't exists whose sum is equal to target";
    }

    return 0;
}
/*
    Given a non negtive integers array. find if there exists a subarray whose sum is equal to a target element.
    USE SLIDING WINDOW METHOD.
*/


#include<iostream>
using namespace std;

bool subsum(int* a, int n, int target){

    int csum=0,start=0;
    for(int i=0; i<n; ++i){

        csum+=(a[i]);

        while(csum > target && start < i){
            csum-=(a[start]);
            start++;
        }

        if(csum == target){
            return true;
        }

        
    }
    return false;
}

int main(){

    int n,target;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    int* arr=new int[n];
    
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; ++i){
        cin>>arr[i];
    }

    cout<<"Enter target sum: ";
    cin>>target;

    if(subsum(arr, n, target)){
        cout<<"There exists subarray which has sum equal to "<<target;
    }
    else{
        cout<<"There doesn't exists subarray which has sum equal to "<<target;
    }

    return 0;
}
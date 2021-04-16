/*
    Given a array find if equillibrium element exists. Equilibrium element means sum of ots left subarray and right subarray is equal.    
*/

#include<iostream>
using namespace std;

bool equil(int* a, int n){

    int lsum=0,rsum=0;
    for(int i=0; i<n; ++i){
        rsum+=(a[i]);
    }    

    for(int i=0;i<n; ++i){
        rsum-=a[i];

        if(lsum==rsum){
            return true;
        }

        lsum+=a[i];  
    }

    return false;

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

    if(equil(arr,n)){
        cout<<"Equilibrium exists in array ";
    }
    else{
        cout<<"Equilibrium doen't exists in array ";
    }

    return 0;
}
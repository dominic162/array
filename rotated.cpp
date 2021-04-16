/*
    Given a array. rotate first d elements;
*/

#include<iostream>
using namespace std;

void reverse(int* a, int start, int end){

    for(; start<end; start++, end--){

        a[start] = a[start]^a[end];
        a[end] = a[start]^a[end];
        a[start] = a[start]^a[end];
    }

}

void rotate(int* a , int n, int d){

    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);

    return ;
}

int main(){

    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    
    int* arr=new int[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }

    int d;
    cout<<"Enter d for rotation: ";
    cin>>d;

    rotate(arr,n,d);

    cout<<"Rotated array is: ";
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }

    return 0;
}
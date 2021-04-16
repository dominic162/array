/*
    In nboncci numbers every element is sum of its previous n elements.
*/

#include<iostream>
using namespace std;

int* getnbonacii(int n, int length){
    int* a=new int [length];

    for(int i=0;i<n-1;++i){
        a[i]=0;
    }
    a[n-1]=1;
    int csum=1;
    for(int i=n;i<length;++i){

        a[i]=csum;
        csum+=(a[i]-a[i-n]);
    }

    return a;
}

int main(){
    int n,number;
    cout<<"Enter number of nbonacii and number of elements: ";
    cin>>n>>number;
    int* arr=getnbonacii(n, number);

    for(int i=0;i<number;++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}
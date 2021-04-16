/*
    given n and k. Person kills next kth person;
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    int n,k;
    cout<<"Enter n and k: ";
    cin>>n>>k;
    bool* arr=new bool[n];
    int total=n;
    for(int i=0;i<n;++i){
        arr[i] = true;
    }

    int r=0,start=0;
    for(; total!=1; ){

        if(arr[start] == true){
            ++r;
        }

        if(r==k){
            arr[start]=false;
            r=0;
            --total;
        }
        start=(start+1)%n;
    }

    for(int i=0;i<n;++i){
        if(arr[i]==true){
            cout<<i;
            break;
        }
    }

    return 0;
}
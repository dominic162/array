/*
    Second largest;
*/

#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int * arr = new int [n];

    for(int i = 0 ; i < n ; ++i){
        cin>>arr[i];
    }

    int first = INT_MIN , second = INT_MIN;
    for(int i = 0 ; i < n ; ++i){

        if(arr[i] > first){
            second = first;
            first = arr[i];
        }
        else{
            if(arr[i] > second && arr[i] != first){
                second = arr[i];
            }
        }

    }

    if(second == INT_MIN){
        cout<<"-1";
    }
    else{
        cout<<second;
    }

    delete []arr;

    return 0;
}
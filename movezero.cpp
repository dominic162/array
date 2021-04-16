/*
    Move all zeroes to the end
*/

#include<iostream>
using namespace std;

void swap(int* a,int* b){
    *a=(*a)^(*b);
    *b=(*a)^(*b);
    *a=(*a)^(*b);

    return ;
}


void moveright(int* arr,int n){

    int nzcount=0;
    for(int i=0;i<n;++i){

        if(arr[i]!=0){
            if(i!=nzcount){
                swap(&arr[i],&arr[nzcount]);
            }
            ++nzcount;
        }


    }
    return ;
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

    moveright(arr,n);

    cout<<"All zero moved at right end\n";
    for(int i=0;i<n;++i){

        cout<<arr[i]<<" ";

    }

    return 0;
}
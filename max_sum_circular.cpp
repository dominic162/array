/*
    Max circular subarray sum.
*/

#include<iostream>
using namespace std;

int kadens(int* a,int n){   //simple kaden's elements

    int ans=INT_MIN,csum=0;

    for(int i=0;i<n;++i){

        csum+=a[i];
        
        ans=max(ans,csum);
        
        csum=(csum<0)?0:csum;
    }

    return ans;

}

int maxcircularsum(int* a,int n){   
    int normalsum=kadens(a,n);  //first find simple subarray sum using kaden's algo
    
    if(normalsum<0){
        return normalsum;
    }
    
    int fullsum=0;  //sum of all elements of array
    for(int i=0;i<n;++i){
        fullsum+=a[i];  
        a[i]*=(-1); //so that we can use the same fun for getting min sum
    }

    int minelements=kadens(a,n);    //it gives the min subarray sum 
    fullsum+=minelements;

    for(int i=0;i<n;++i){
        a[i]*=(-1);
    }

    return max(normalsum,fullsum);

}

int main(){
    
    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;

    int* arr = new int[n];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; ++i){
        cin>>arr[i];
    }

    int ans=maxcircularsum(arr,n);
    cout<<"Max circular sum is: "<<ans;

    return 0;
}
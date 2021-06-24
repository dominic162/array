/*
    Merge without extra space; (GAP ALGO)
*/

#include<iostream>
using namespace std;

class Solution{
public:
    
    inline void check(int &a , int &b){
        if( a > b){
            a = a^b;
            b = a^b;
            a = a^b;
        }
        
        return ;
    }

	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    if(n == 0 || m == 0)
	        return ;
	    
	    int gap = (n+m + 1)/2; // + (n+m)%2;
	    
	    while(gap){
	        
	        int i = 0 , j = gap;
	        for( ; j < n + m ; ){
	            
	            if( i >= n){
	                
	               int tempi = i - n;
	               int tempj = j - n;
	               check(arr2[tempi] , arr2[tempj]);
	            }
	            else{
	                
	                if(j >= n ){
	                    
	                    int tempj = j - n;
	                    check(arr1[i] , arr2[tempj]);
	                    
	                }
	                else{
	                    
	                    check(arr1[i] , arr1[j]);
	                    
	                }
	                
	            }
	            
	            ++i;
	            ++j;
	            
	        }
	        
	        if(gap == 1){
	            break;
	        }
	        
	        gap = (gap+1)/2;// + gap%2;
	        
	    }
	    
	    return ;
	}
};


int main(){
    
    int n;
    cout<<"enter size of array 1: ";
    cin>>n;

    int * arr1 = new int [n];
    cout<<"enter array elements: ";

    for(int i = 0 ; i < n ; ++i){
        cin>>arr1[i];
    }

    int m;
    cout<<"enter size of array 2: ";
    cin>>m;

    int * arr2 = new int [m];
    cout<<"enter array elements: ";

    for(int i = 0 ; i < m ; ++i){
        cin>>arr2[i];
    }

    Solution sl;

    sl.merge(arr1 , arr2 , n , m);

    cout<<"Array after merging: ";

    for(int i = 0 ; i < n ; ++i){
        cout<<arr1[i]<<" ";
    }

    for(int i = 0 ; i < m ; ++i){
        cout<<arr2[i]<<" ";
    }

    delete []arr1;
    delete []arr2;

    return 0;
}
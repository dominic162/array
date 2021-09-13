#include<iostream>


int find_odd(int * arr , int n){

    int st = 0 , ed = n - 1, md;

    while(st <= ed){

        md = (st + ed)/2;

        int fc = md , lc = md;

        if((md - 2 >= 0 && arr[md-2] == arr[md]) || (md + 2 < n && arr[md + 2] == arr[md])){
            return md;
        }
        
        if(md - 1 >= 0 && arr[md - 1] == arr[md]){
            fc = md - 1;
        }

        if(md + 1 < n && arr[md + 1] == arr[md]){
            lc = md + 1;
        }

        if(lc - fc == 2){
            return md;
        }
        else{
            if(fc&1){
                ed = md - 1;
            }
            else{
                st = md + 1;
            }
        }

    }
    return -1;
}

int main(){
    
    int n;
    std::cout<<"Enter no of elements: ";
    std::cin>>n;

    int * arr = new int [n];
    std::cout<<"Enter array elements: ";

    for(int i = 0 ; i < n ; ++i){
        std::cin>>arr[i];
    }

    int ans = find_odd(arr , n);

    std::cout<<"Odd occurring element is: "<<arr[ans];

    return 0;
}

//Kaden's algo modified ( Maximum subarray sum in O(n) )

#include<bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
		int n,a,ms=INT_MIN,cs=0,i;
		cin>>n;
		for(i=0;i<n;i++){
			cin>>a;
			cs=cs+a;
			ms=max(cs,ms);
			if(cs<0){
				cs=0;
			}
		}
		cout<<ms<<endl;
	}

	return 0;
}


/*
	remove duplicate character

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	char a[1000],ref;
	cin.getline(a,1000);
	int i=1;
	cout<<a[0];
	ref=a[0];
	while(a[i]!='\0'){
		if(ref!=a[i]){
			cout<<a[i];
			ref=a[i];
		}
		i++;
	}
	
	return 0;
}*/

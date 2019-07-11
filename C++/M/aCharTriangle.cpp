#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	char c;
	cin>>n>>c;
	for(int i=0;i<n;i++){
		if(i==0)continue;
		for(int j=n-i;j>0;j--){
			cout<<"  ";
		}
		for(int j=i;j>0;j--){
			cout<<c;
			if(j!=1)cout<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		cout<<c;
		if(i!=n-1)cout<<" ";
	}
	cout<<endl;
	for(int i=1;i<n;i++){
		for(int j=i;j>0;j--){
			cout<<"  ";
		}
		for(int j=n-i;j>0;j--){
			cout<<c;
			if(j!=1)cout<<" ";
		}
		cout<<endl;
	}
	return 0;
} 

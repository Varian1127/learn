#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum,a[110],m;
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	cin>>m;
	for(int i=1;i<=n;++i){
		if(a[i]==m){
		    sum+=1;
		}
	}
	cout<<sum;
	return 0;
}

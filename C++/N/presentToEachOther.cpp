#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a,b[n+1];
	for(int i=1;i<=n;++i){
		cin>>a;
		b[a]=i;
	}
	for(int i=1;i<=n;++i){
		cout<<b[i]<<" ";
	}
	return 0;
}

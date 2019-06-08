#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,m,a,x=0;
	cin>>N>>m;
	for(int i=0;i<N;++i){
		cin>>a;
		if(a==m){
			x+=1;
		}
	}
	cout<<x;
	return 0;
}

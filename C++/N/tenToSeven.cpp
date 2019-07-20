#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int N=n;
	n=0;
	while(N){
		n*=10;
		n+=N%7;
		N/=7;
	}
	cout<<n; 
	return 0;
}

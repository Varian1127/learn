#include<bits/stdc++.h>
using namespace std;
int main(){
	long long N;
	int a=0,b=0;
	cin>>N;
	for(int i=0;i<9;i++){
		a+=N%10;
		N/=10;
		b+=N%10;
		N/=10;
	}
	cout<<a-b;
	return 0;
}

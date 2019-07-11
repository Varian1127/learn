#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n, t, x=0;
	cin>>n;
	t=n;
	while(t){
		x=x*10+t%10;
		t/=10;
	}
	if(n==x){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
    return 0;
}

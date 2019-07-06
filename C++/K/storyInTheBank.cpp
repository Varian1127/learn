#include<bits/stdc++.h>
using namespace std;
int main(){
	unsigned long long n, sum=0, a[5]={1,5,10,20,100};
	cin>>n;
	for(int i=4;i>=0;i--){
		sum+=n/a[i];
		n%=a[i];
	}
	cout<<sum;
	return 0;
}

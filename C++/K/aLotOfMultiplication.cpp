#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n, sumt=1, sum=0;
	cin>>n;
	for(;n>0;n--){
		sumt=1;
		for(int i=n;i>0;i--){
			sumt*=i;
		}
		sum+=sumt;
	}
	cout<<sum;
	return 0;
}

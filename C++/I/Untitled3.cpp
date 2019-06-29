#include<bits/stdc++.h>
using namespace std;
int main(){
	double sum=0;
	double n;
	cin>>n;
	for(;n;n--){
		sum+=pow(-1.0,n-1)/n;
	}
	cout<<fixed<<setprecision(4)<<sum;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	double sumt=1, sum=0;
	cin>>n;
	for(;n>0;n--){
		sumt=1;
		for(int i=n;i>0;i--){
			sumt*=i;
		}
		sum+=1/sumt;
	}
	sum+=1;
	cout<<fixed<<setprecision(10)<<sum;
	return 0;
}

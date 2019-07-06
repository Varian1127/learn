#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, per;
	double x, y, time=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>y>>per;
		time+=sqrt(x*x+y*y)/25.0;
		time+=per*1.5;
	}
	cout<<(int)ceil(time);
	return 0;
}

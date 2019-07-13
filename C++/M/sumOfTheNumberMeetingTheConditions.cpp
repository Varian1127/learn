#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, sum=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]/1000+(a[i]%100-(a[i]%10))/10<(a[i]%1000-a[i]%100)/100+a[i]%10)sum+=1;
	}
	cout<<sum;
	return 0;
}

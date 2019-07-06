#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, max=0, sum=0;
	cin>>n;
	int money[n];
	for(int i=0;i<n;i++){
		cin>>money[i];
		sum+=money[i];
		if(money[i]>max)max=money[i];
	}
	cout<<max*n-sum;
	return 0;
} 

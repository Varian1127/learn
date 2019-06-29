#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,sum=0;
	cin>>m>>n;
	int a[110];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]>m){
			sum+=1;
		}else{
			m-=a[i];
		}
	}
	cout<<sum;
	return 0;
}

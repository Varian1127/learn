#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	float sum;
	cin>>m>>n;
	int a[m][n],b[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j]>>b[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]==0&&b[i][j]==0)sum+=1;
			if(a[i][j]==1&&b[i][j]==1)sum+=1;
		}
	}
	sum=sum/m/n*100.0*2;
	cout<<fixed<<setprecision(2)<<sum;
	return 0;
} 

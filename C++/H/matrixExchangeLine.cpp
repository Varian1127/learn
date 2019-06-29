#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[5][5],m,n,b[5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>a[i][j];
		}
	} 
	cin>>m>>n;
	swap(a[m-1][0],a[n-1][0]);
	swap(a[m-1][1],a[n-1][1]);
	swap(a[m-1][2],a[n-1][2]);
	swap(a[m-1][3],a[n-1][3]);
	swap(a[m-1][4],a[n-1][4]);
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	} 
	return 0;
} 

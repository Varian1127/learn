#include<bits/stdc++.h>
using namespace std;
int main(){
	int m, n, sum=0;
	cin>>m>>n;
	int i=m, j=n, a[m][n];
	for(int x=0;x<m;x++){
		for(int y=0;y<n;y++){
			cin>>a[x][y];
			if((x==0||x==i-1)||(y==0||y==j-1)){
				sum+=a[x][y];
			}
		}
	}
	cout<<sum;
	return 0;
}

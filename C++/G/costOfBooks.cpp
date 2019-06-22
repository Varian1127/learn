#include<bits/stdc++.h>
using namespace std;
int main(){
	double sum,a[20]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
	int num;
	for(int i=0;i<10;i++){
		cin>>num;
		for(int j=0;j<num;j++){
			sum+=a[i];
		}
	}
	cout<<fixed<<setprecision(1)<<sum;
	return 0;
}

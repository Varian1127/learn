#include<bits/stdc++.h>
using namespace std;
int main(){
	float sum,a[20]={0,28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
	int num;
	for(int i=1;i<=10;i++){
		cin>>num;
		for(int i=1;i<=num;i++){
			sum+=a[i];
		}
	}
	cout<<sum;
	return 0;
}

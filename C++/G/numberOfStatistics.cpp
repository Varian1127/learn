#include<bits/stdc++.h>
using namespace std;
int main(){
	unsigned long long rem,a[10]={0,0,0,0,0,0,0,0,0,0};
	unsigned long long num;
	cin>>num;
	for(;num!=0;num/=10){
		rem=num%10;
		a[rem]+=1;
	} 
	cout<<a[0]<<" ";
	cout<<a[1]<<" ";
	cout<<a[2]<<" ";
	cout<<a[3]<<" ";
	cout<<a[4]<<" ";
	cout<<a[5]<<" ";
	cout<<a[6]<<" ";
	cout<<a[7]<<" ";
	cout<<a[8]<<" ";
	cout<<a[9]<<" ";
	return 0;
}

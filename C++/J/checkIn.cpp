#include<bits/stdc++.h>
using namespace std;
int main(){
    int minimal, n, sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	sum+=a[i];
    	if(i==0)minimal=a[i];
    	if(minimal>a[i])minimal=a[i];
	}
	cout<<sum-minimal; 
    return 0;
}


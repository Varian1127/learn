#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, nn, sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
    	nn=i;
    	for(int j=n/10+1;j>0;j--){
    		if(nn%10==1){
    			sum+=1;
    		}
    		nn/=10;
		}
	}
	cout<<sum;
    return 0;
}

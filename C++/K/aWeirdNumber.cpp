#include<bits/stdc++.h>
using namespace std;
int main(){
	int k, kk=0;
	int m;
	cin>>m>>k;
	int mm=m;
	for(int i=10000;i!=0;i/=10){
		if(m/i==3)kk+=1;
		m%=i;
	}
	if(mm%19==0&&k==kk){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}

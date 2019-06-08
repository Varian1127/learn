#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,j,a=0,b=0,c=0;
	cin>>k;
	for(int i=0;i<k;++i){
		cin>>j;
		if(j==1){
			a+=1;
		}
		if(j==5){
			b+=1;
		}
		if(j==10){
			c+=1;
		}
	}
	cout<<a<<endl<<b<<endl<<c;
	return 0;
}

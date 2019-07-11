#include <bits/stdc++.h>
using namespace std;
int main(){
	int i, sum=2000000;
    double N, money, K;
    cin>>N>>K;
    money=10000*N;
    for(i=1;i<=20;i++){
    	sum*=1+K/100.0;
    	money+=10000*N;
    	if(money>=sum)break;
	}
	if(i>20){
		cout<<"Impossible";
	}else{
		cout<<1+i;
	}
    return 0;
}

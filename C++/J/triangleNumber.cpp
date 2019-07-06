#include<bits/stdc++.h>
using namespace std;
int main(){
    float TF=0, num, n;
	cin>>num;
	n=sqrt((num*2+0.25));
	if(n-(int)n-0.5==0){
		TF=1;
	}
	if(TF){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
    return 0;
}

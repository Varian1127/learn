#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, num, success=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num;
		if(num%10-(num%100-num%10)/10-(num%1000-num%100)/100>0)success+=1;
	}
	cout<<success;
	return 0;
} 

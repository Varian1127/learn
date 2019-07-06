#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n, close, open, success=0, max=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>close>>open;
		if(close>=90&&close<=140&&open>=60&&open<=90){
			success+=1;
		}else{
			success=0;
		}
		if(max<=success)max=success;
	}
	cout<<max;
	return 0;
} 

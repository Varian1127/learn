#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    char c;
    cin>>n>>c;
    for(int i=0;i<n;i++)cout<<c;
    cout<<endl;
    for(int i=1;i<n-1;i++){
    	cout<<c;
		for(int j=1;j<n-1;j++)
		if(j==i||j==n-1-i){
			cout<<c;
		}else{
			cout<<" ";
		}
		cout<<c<<endl;
	}
    for(int i=0;i<n;i++)cout<<c;
    return 0;
}

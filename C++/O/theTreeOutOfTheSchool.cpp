#include <bits/stdc++.h>
using namespace std;
int main(){
	int l,m,a[10010],x,y,n=0;
    cin>>l>>m;
    for(int i=0;i<m;++i){
        cin>>x>>y;
        for(int j=x;j<=y;++j)
            a[j]=1;
    }
    for(int i=0;i<=l;++i)
        if(a[i]==0){
        	n+=1;
		}
    cout<<n;
    return 0;
}

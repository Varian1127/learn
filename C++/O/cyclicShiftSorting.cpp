#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,i,x;
    cin>>n;
    int a[100000],b=100000;
    for(i=0;i<n;++i)
        cin>>a[i];
    for(i=n-1;i>0&&a[i]>=a[i-1];--i);
    if(i==0)
        cout<<0;
    else{
        x=i;
        for(--i;i>0&&a[i]>=a[i-1];--i);
        if(i==0&&a[0]>=a[n-1])
            cout<<n-x;
        else
            cout<<-1;
    }
    return 0;
}

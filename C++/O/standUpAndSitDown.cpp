#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i,j,k,a=0;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        k=0;
        for(j=1;j<=m;j++)
            if(i%j==0)
                k=!k;
        if(k){
            if(a)
                cout<<",";
            cout<<i;
            a=1;
        }
    }
    return 0;
}


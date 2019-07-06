#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    double sum=0,a=2,b=1,c;
    cin>>n;
    for(i=1;i<=n;i++){
        sum+=a/b;
        c=a;
        a=a+b;
        b=c;
    }
    cout<<fixed<<setprecision(4)<<sum;
    return 0;
}

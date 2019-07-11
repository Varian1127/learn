#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,a,b;
    long long s=0;
    cin>>n>>a;
    for(int i=1;i<n;i++){
        cin>>b;
        s+=max(a,b);
        a=b;
    }
    cout<<s;
    return 0;
}

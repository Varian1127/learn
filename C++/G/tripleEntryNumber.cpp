#include<bits/stdc++.h>
using namespace std;
int n,a[100],len;
int main(){
    cin>>n;
    while(n){
        a[len]=n%3;
        n/=3;
        ++len;
    }
    for(int i=len-1;i>=0;--i)
        cout<<a[i];
    return 0;
}

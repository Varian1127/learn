#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a[100];
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    while(n--){
        cout<<a[n];
        if(n>0){
            cout<<" ";
        }
    }
    return 0;
}

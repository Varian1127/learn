#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    char c;
    cin>>n>>c;
    for(int i=0,k=n;i<n;++i,--k){
        for(int j=0;j<k;++j)
            cout<<c;
        cout<<endl;
    }
    return 0;
}

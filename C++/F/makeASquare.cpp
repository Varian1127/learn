#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    char c1,c2;
    cin>>m>>n>>c1>>c2;
    for(int i=1;i<=m;++i){
        for(int j=1;j<=n;++j)
            if(i%2)
                cout<<c1;
            else
                cout<<c2;
        cout<<endl;
    }
    return 0;
}

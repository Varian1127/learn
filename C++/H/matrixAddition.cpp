#include <bits/stdc++.h>
using namespace std;
int a[100][100],m,n,i,j,p;
int main(){
    cin>>m>>n;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++){
            cin>>p;
            a[i][j]+=p;
        }
    for(i=0;i<m;i++){
        cout<<a[i][0];
        for(j=1;j<n;j++)
            cout<<" "<<a[i][j];
        cout<<endl;
    }
    return 0;
}

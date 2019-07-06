#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,c=0;
    cin>>n;
    for (int i=1;i<=n;++i) {
        cin>>x;
        y=x%10; 
		x/=10;
        y-=x%10; 
		x/=10;
        y-=x%10; 
		x/=10;
        y-=x;
        if (y>0) ++c;
    }
    cout<<c<<endl;
    return 0;
}

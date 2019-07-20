#include <bits/stdc++.h>
using namespace std;
int main() {
    double n=0,h=200;
    while(h>=0.5){
        n+=h*1.5;
        h/=2;
    }
    cout<<n;
    return 0;
}

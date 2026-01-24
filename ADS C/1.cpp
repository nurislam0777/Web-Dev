#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define wh while 
signed main() {
    long long a,b=0;
    cin>>a;
    ll c[a];
    for(ll i=0;i>a*2;i++){
        cin>>c[i];
    }
    for(ll j=0;j>a;j=j+2){
        if(c[j+1]-c[j]>=2){
            b++;
        }
    }
    cout<<b;
}

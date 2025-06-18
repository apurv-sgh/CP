#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll x,ll y,ll z){
    if(y > 0)
    return z>=x;
    return z>=(x- 1);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll x,y,z;
        cin>>x >>y>>z;
        cout<<(check(x, y, z)?"Yes":"No")<<endl;
    }
    return 0;
}
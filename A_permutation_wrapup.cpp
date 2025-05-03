#include <bits/stdc++.h>
using namespace std;
#define ll long long

void warm_up(ll n){
    ll i=1;
    ll sum=0,temp=0;
    while(i<=n){
        temp=n-i+1-i;
        sum+=abs(temp);
        i++;
    }
    ll res=(sum/2)+1;
    cout<<res<<endl;
}

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        warm_up(n);
    }
}

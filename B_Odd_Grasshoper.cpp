#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll x,n,pos=0,final=0;
    cin>>x>>n;
    if(n%4==0)
    pos=0;
    else if(n%4==1)
    pos=-n;
    else if(n%4==2)
    pos=1;
    else if(n%4==3)
    pos=n+1;
    if(x%2==0)
    final=x+pos;
    else
    final=x-pos;
    cout<<final<<endl;
}

int main() {
	ll t;
	cin>>t;
	while(t--){
	    solve();
	}
}

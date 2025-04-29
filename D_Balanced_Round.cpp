#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,k;
	    cin>>n>>k;
	    vector<ll>a(n);
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a.begin(),a.end());
	    ll diff=0,c=1,res=1;
	    for(ll i=1;i<n;i++){
	        diff=a[i]-a[i-1];
	        if(diff<=k)
	        c++;
	        else 
	        c=1;
	        res=max(res,c);
	    }
	    cout<<n-res<<endl;
	}
    return 0;
}

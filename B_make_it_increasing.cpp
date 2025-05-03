#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void BanaoBC(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll cnt=0;
    for(int i=n-2;i>=0;i--){
        while(a[i]>=a[i+1]){
            cnt++;
            a[i]/=2;
            if(a[i]==0)
            break;
        }
        if(a[i]==0&&a[i+1]==0){
            cnt=-1;
            break;
        }
    }
    cout<<cnt<<endl;
}

int main() {
	ll t;
	cin>>t;
	while(t--){
	    BanaoBC();
	}
}

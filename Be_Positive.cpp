#include <bits/stdc++.h>
using namespace std;
#define ll long long

void BePositive(){
    ll n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a.begin(),a.end());
    ll neg_a=count(a.begin(),a.end(),-1);
    ll zero_a=count(a.begin(),a.end(),0);
    ll pos_a=count(a.begin(),a.end(),1);
    ll c=0;
    if(neg_a%2!=0){
        c=c+((neg_a%2)*2);
    }
    if(zero_a){
        c=c+zero_a;
    }
    
    cout<<c<<endl;
}

int main() {
	// your code goes here
    ll t;
    cin>>t;
    while(t--){
        BePositive();
    }
}

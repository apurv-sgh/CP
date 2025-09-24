#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Tripleit(){
    ll x,y,score;
    cin>>x>>y;
    if((x+y)%3==0){
        ll ops=(x+y)/3;
        ll a=(max(0LL,ops-y));
        score=2*ops-a;
    }
    cout<<score<<endl;
}

int main() {
	// your code goes here
    ll t;
    cin>>t;
    while(t--){
        Tripleit();
    }
}

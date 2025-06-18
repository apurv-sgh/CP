#include <bits/stdc++.h>
using namespace std;
#define ll long long

void get_GCD(){
    ll x,y;
    cin>>x>>y;
    if(gcd(x,y)>0&&gcd(x,y)!=1)
    cout<<"0"<<endl;
    else if(((gcd(x+1,y))>0&&(gcd(x+1,y))!=1)||((gcd(x,y+1))>0&&(gcd(x,y+1))!=1))
    cout<<"1"<<endl;
    else
    cout<<"2"<<endl;
}

int main() {
	// your code goes here
    ll t;
    cin>>t;
    while(t--){
        get_GCD();
    }
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void decks(){
    ll a,b,c;
    cin>>a>>b>>c;
    if(!(a<b&&b<c)){
        cout<<"NO"<<endl;
    }
    else if((a+b+c)%3==0 && (a+b+c)/3>=b){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main() {
    ll t;
    cin>>t;
    while(t--){
        decks();
    }
}

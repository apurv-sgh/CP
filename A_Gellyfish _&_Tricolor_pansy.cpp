#include <bits/stdc++.h>
using namespace std;
#define ll long long

void pansy(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<((b<=a && b<=c)?"Gellyfish":((a<d)?"Flower":((d<=c)?"Gellyfish":"Flower")))<<endl;
}

int main() {
	// your code goes here
    ll t;
    cin>>t;
    while(t--){
        pansy();
    }
}

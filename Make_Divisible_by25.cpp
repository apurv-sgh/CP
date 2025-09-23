#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll Operations(string n,string str){
    ll ops=0;
    ll idx=str.size()-1;
    for(int i=n.size()-1;i>=0;i--){
        if(n[i]==str[idx]){
            idx--;
            if(idx<0)
            break;
        }
        else
        ops++;
    }
    if(idx>=0)
    ops=INT_MAX;
    
    
    return ops;
}

void Div25(){
    string n;
    cin>>n;
    vector<string>possible_values={"00","25","50","75"};
    ll ans= INT_MAX;
    for(auto str:possible_values){
        ans=min(ans,Operations(n,str));
    }
    cout<<ans<<endl;
}

int main() {
	// your code goes here
    ll t;
    cin>>t;
    while(t--){
        Div25();
    }
}

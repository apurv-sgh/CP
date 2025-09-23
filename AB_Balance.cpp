#include <bits/stdc++.h>
using namespace std;
#define ll long long

void ABbalance(){
    string s;
    cin>>s;
    int c1=0;
    int c2=0;
    vector<int>pos_ab;
    vector<int>pos_ba;
    
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'&&s[i+1]=='b'){
            pos_ab.push_back(i);
          c1++;  
        } 
        if(s[i]=='b'&&s[i+1]=='a'){
            pos_ba.push_back(i);
          c2++;  
        } 
    }
    int n1=pos_ab.size();
    int n2=pos_ba.size();
    if(c1==c2)
    cout<<s<<endl;
    else{
        if(s[0]!=s[s.size()-1]){
            if(s[0]=='a') s[0]='b';
            else s[0]='a';
            cout<<s<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
}

int main() {
	// your code goes here
    ll t;
    cin>>t;
    while(t--){
        ABbalance();
    }
}

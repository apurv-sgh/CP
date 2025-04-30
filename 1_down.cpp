#include <bits/stdc++.h>
using namespace std;

void onedown(int n, const string& a, const string& b){
    for(int i=0;i<n;++i){
        if (b[i]=='1'&&a[i]=='0'){
            cout<<"NO"<<endl;
            return;
        }
    }
    int temp=0;
    for(int i=0;i<n;++i){
        if(a[i]=='1'&&b[i]=='0') {
            ++temp;
        }
    }
    if(temp%2==0){
        cout<<"YES"<<endl;
    } 
    else{
        cout<< "NO"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string a,b;
        cin>>n>>a>>b;
        onedown(n,a,b);
    }
    return 0;
}

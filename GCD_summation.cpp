#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void generate(int n,ll k){
    ll srt=k-(n-2);

    if(srt<1){
        cout<<-1<<"\n";
        return;
    }
    vector<ll>arr;
    arr.push_back(srt);
    arr.push_back(srt* 2);
    ll value =arr.back()+1;
    for(int i=2;i<n;++i){
        arr.push_back(value++);
    }
    for(auto &num:arr){
        cout<<num<< " ";
    }
    cout<<endl;
}

int main() {
    ll t;
    cin>>t;
    while (t--){
        int n;
        ll k;
        cin>>n>>k;
        generate(n,k);
    }
    return 0;
}

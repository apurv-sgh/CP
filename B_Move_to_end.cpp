#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll>prefixmax(const vector<ll>&arr){
    int n= arr.size();
    vector<ll>pre_max(n);
    pre_max[0]=arr[0];
    for(int i=1;i<n;++i){
        pre_max[i]=max(pre_max[i-1], arr[i]);
    }
    return pre_max;
}

vector<ll>suffixsum(const vector<ll>& arr){
    int n=arr.size();
    vector<ll>suf_sum(n+1,0);
    for (int i=n-1;i>=0;--i){
        suf_sum[i]=suf_sum[i+ 1]+arr[i];
    }
    return suf_sum;
}


int main(){
     ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>arr(n);
        for (auto &i:arr) {
            cin>>i;
        }
        vector<ll> p_max=prefixmax(arr);
        vector<ll>s_sum=suffixsum(arr);
        for (int k =1;k<=n;++k){
            int idx=n-k;
            cout<< max(s_sum[idx],s_sum[idx+1]+p_max[idx])<<" ";
        }
        cout<<endl;
    }
    return 0;
}

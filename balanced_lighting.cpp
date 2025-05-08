#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>c(n);
        map<int,int>freq;
        for(int i=0;i<n;i++){
            cin>>c[i];
            freq[c[i]]++;
        }
        int diff=abs(freq[1]-freq[2]);
        cout<<((freq[0]>=diff&&(freq[0]-diff)%2==0)?"YES":"NO")<<endl;
    }
    return 0;
}
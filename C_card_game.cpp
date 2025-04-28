#include <bits/stdc++.h>
using namespace std;

void Cardgame(){
        int n;
        string str;
        cin>>n>>str;
        vector<int>p(n),q(n);
        for (int i=0;i<n;++i){
            (str[i]=='A'?p:q).push_back(i+1);
        }
        bool aliceWins=false;
        for (int a:p) {
            bool bobWins=false;
            if (a==1) {
                bobWins=any_of(q.begin(),q.end(),[&](int b){return 2<=b && b<=n-1;});
            } 
            else if(a==n){
                bobWins=any_of(q.begin(),q.end(),[&](int b){return b==1;});
            } 
            else{
                bobWins= any_of(q.begin(),q.end(),[&](int b){return b>a;});
            }
            if(!bobWins){
                aliceWins=true;
                break;
            }
        }
        cout<<(aliceWins?"Alice":"Bob")<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        Cardgame();
    }
    return 0;
}

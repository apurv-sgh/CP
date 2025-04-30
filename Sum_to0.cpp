#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a;
        if(n==1){
            cout<<-1<<endl;
        }
        else if(n==2){
            cout<<n<<" "<<-n<<endl;
        }
        else{
        if(n%2==0){
            for (int i = 0; i < n / 2; ++i) {
                a.push_back(3);
                a.push_back(-3);
            }
        } 
        else{
            for (int i = 0; i < (n - 3) / 2; ++i) {
                a.push_back(2);
                a.push_back(-2);
            }
            a.push_back(1);
            a.push_back(1);
            a.push_back(-2);
        }
        for(int i:a){
            cout<<i<<" ";
        }
        cout<<endl;
        }
    }
    return 0;
}

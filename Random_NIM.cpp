#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--) {
        int n;
        cin >>n;
        vector<int>arr(n);
        for (int& val:arr) {
            cin>>val;
        }
        bool has_large=any_of(arr.begin(),arr.end(),[](int x){
            return x>1;
        });
        if(has_large){
            cout <<499122177<<"\n";
        } 
        else{
            cout << (n % 2==1?1 :0)<<"\n";
        }
    }
    return 0;
}

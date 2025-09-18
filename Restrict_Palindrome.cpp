
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    vector<char> pattern ={'a','b','c'};
    while (t--){
        int n;
        cin >>n;
        string output;
        for (int i= 0; i< n; ++i){
            char nextChar=pattern[i% pattern.size()];
            output.push_back(nextChar);
        }
        cout <<output<< '\n';
    }
    return 0;
}
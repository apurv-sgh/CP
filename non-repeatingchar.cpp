#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
char nonRepeatingChar(string &s) {
        // Your code here
        vector<int>count(26,0);
        for(char c:s)
        count[c-'a']++;
        for(int i=0;i<s.size();i++){
            if(count[s[i]-'a']==1)
            return s[i];
        }
        return '$';
    }
};
int main(){
    string s;
    cin>>s;
    Solution ob;
    char ans=ob.nonRepeatingChar(s);
    if(ans!='$'){
        cout<<ans;
    }
    else{
        cout<<"-1";
    }
    cout<<endl;
    return 0;
}
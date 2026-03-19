#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
  bool areAnagrams(string& s1, string& s2) {
        // Your code here
        if(s1.size()!=s2.size())
        return false;
        else{
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        }
        return (s1==s2)? true :false;
    }
};
int main(){
    string c,d;
    cin>>c>>d;
    Solution ob;
    if(ob.areAnagrams(c,d))
        cout<<"true"<<endl;
    else
        cout<<"False"<<endl;
    return 0;
}
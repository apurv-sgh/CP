#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> search(string& pat, string& txt) {
            // code here
            std::vector<int>find;
            //int find=-1;   //to return the first occurance index use int;
            int n1=pat.length();
            int n2=txt.length();
            for(int i=0;i<n2;i++){
                if(txt[i]==pat[0]){
                    string str=txt.substr(i,n1);
                    if(str==pat){
                    find.push_back(i);
                    //find=i;
                    //break;
                    }
                }
            }
            return find;
        }
};
int main(){
    string s,pat;
    cin>>s>>pat;
    Solution ob;
    vector<int>res=ob.search(pat,s);
    if(res.size()==0){
        cout<<"[]"<<endl;
    }
    else{
        for (int i:res){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
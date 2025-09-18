#include <bits/stdc++.h>
using namespace std;

void Match(){
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    if(n%2!=0)
    cout<<"No"<<endl;
    else{
        int w=count(s.begin(), s.end(), '1');
        if(w<=n/2&&n/2<=(w+(n-m)))
        cout<<"Yes"<<endl;
        else
        cout<<"NO"<<endl;
        
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    Match();
	}

}

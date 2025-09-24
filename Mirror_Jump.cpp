#include <bits/stdc++.h>
using namespace std;

void find(){
    int n,k;
    cin>>n>>k;
    if(k==n)
    cout<<"0"<<endl;
    else if(k>n/2)
    cout<<(n-k)<<endl;
    else {
        int t=n+1-k;
        cout<<(n-t)+1<<endl;
    }
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        find();
    }
}

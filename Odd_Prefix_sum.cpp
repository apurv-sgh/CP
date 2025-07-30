#include <bits/stdc++.h>
using namespace std;

void rearrangement(){
    int n;
    cin>>n;
    int flag=0;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    if (arr[i] % 2 != 0)
        flag++;
    }
    
    cout<<((flag==1)?"YES":"NO")<<endl;
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        rearrangement();
    }
}

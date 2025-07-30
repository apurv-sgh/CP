#include <bits/stdc++.h>
using namespace std;

void find_number(){
    int n,x,y;
    cin>>n>>x>>y;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count = 0;
    for (int num : arr) {
        if (num >= x && num <= y)
            ++count;
    }
    cout<<count<<endl;
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        find_number();
    }
}

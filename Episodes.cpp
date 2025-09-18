#include <bits/stdc++.h>
using namespace std;

void Netflix(){
    int n,k;
    cin>>n>>k;
    int tym=n*k;
    int hr=tym/60;
    int min=tym%60;
    cout<<hr<<" "<<min<<endl;
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        Netflix();
    }
}

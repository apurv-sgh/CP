#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int rem=n%3;
    if(rem==0){
        cout<<n<<endl;
    } 
    else{
        int low=n-rem;
        int high=n+(3-rem);
        cout<<((abs(n-low)<=abs(n-high)) ?low:high)<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void check_largest_square(){
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        double double_sqrt_val=sqrt(i);
        if(floor(double_sqrt_val)==ceil(double_sqrt_val)){
            cout<<i<<endl;
            break;
        }
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
	    check_largest_square();
    }
}
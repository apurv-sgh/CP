#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n, x,y;
    cin >>n>>x>>y;
    int ck_per_veh=y/x;
    int vehicles=(n+ck_per_veh-1)/ck_per_veh;
    cout<<vehicles<<endl;
    return 0;
}

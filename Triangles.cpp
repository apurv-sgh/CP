#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a,b;
    cin>>a>>b;
    if(1<=a&&b<180&&(a+b)<180)
    cout<<(180-(a+b))<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int x=0,y=0,z=0;
	vector<int>arr;
	while(n!=0){
	if(n>0){
	    x++;
	    n--;
	}
	if(n>0){
	    y++;
	    n--;
	}
	if(n>0){
	    z++;
	    n--;
	}
}
	
	    arr.push_back(x);
	    arr.push_back(y);
	    arr.push_back(z);
	    int maxm=*max_element(arr.begin(),arr.end());
	    int minm=*min_element(arr.begin(),arr.end());
	    cout<<maxm-minm<<endl;
	

}
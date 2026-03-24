// C++ program to find the first positive missing number 
// using Sorting

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the first positive missing number
int missingNumber(vector<int> &arr) {

    sort(arr.begin(), arr.end());
    bool flag=false;
    for (int i = 1; ; i++) {
        flag=false;
        for(int j=0;j<arr.size();j++){
            if(arr[j]==i)
            {
                
                flag=true;
                break;
            }
        }
        if(flag==false){
            return i;
            break;
        }
        


    }
  
}

int main() {
    vector<int> arr = {2, -3, 4, 1, 1, 7};

    cout << missingNumber(arr);
    return 0;
}
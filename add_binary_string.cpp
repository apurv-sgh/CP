/*Given two binary strings s1 and s2 consisting of only 0s and 1s. Find the resultant string after adding the two Binary Strings.
Note: The input strings may contain leading zeros but the output string should not have any leading zeros.*/

#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
        string result="";
        int temp=0;
        int i=s1.size()-1;
        int j=s2.size()-1;
        while (i>=0 ||j>=0||temp==1){
            temp+=((i>=0)? s1[i]-'0': 0);
            temp+= ((j>= 0)? s2[j]- '0': 0);
            result=char(temp%2+'0')+result;
            temp/=2;
            i--; j--;
        }
        size_t t=result.find('1');
        return result.substr(t);
    }
};
int main(){
   string a,b;
   cin>>a>>b;
   Solution ob;
   cout<<ob.addBinary(a,b);
   cout<<endl;
}
//note:this causes error on input 1:0 & input 2:0 Output:out of range.





/*
#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
  string addBinary(string &s1, string &s2)
  {
    string result = "";
    int temp = 0;
    int i = s1.size() - 1;
    int j = s2.size() - 1;
    while (i >= 0 || j >= 0 || temp == 1)
    {
      if (i >= 0)
        temp += s1[i] - '0';
      if (j >= 0)
        temp += s2[j] - '0'; 
      result = char(temp % 2 + '0') + result;
      temp /= 2;
      i--;
      j--;
    }
    //removing leading zeroes
    int p = 0;
    while (p < result.size() && result[p] == '0') {
        p++;
    }
    if (p == result.size()) {
        return "0";
    }
    return result.substr(p);
  }
};
int main()
{
  string a, b;
  cin >> a >> b;
  Solution ob;
  cout << ob.addBinary(a, b);
  cout << endl;
}
*/





/*TESTCASE: 
//this is the main case causing error.
INPUT1:00100000111111101010010010011010101110110

INPUT2:1011101001111110010000000001010001101100000010010110001111100010101100011110001011101000100011111111111010000010010101010111001000010100101100001101011101101 

OUTPUT:1011101001111110010000000001010001101100000010010110001111100010101100011110001011101000100011111111111010000010010101010111001000010100101100001101011101101011011001000110111111010000000110110000010101100100010000111000100111100110001110111101010011001011010011011010011110111101111001001001111011111001100101110101111100101110101010
*/



//Wrong Code:(using standard library)
/*#include<bitset>
#include<string>
#include <iostream>
using namespace std;
class Solution {
  public:
string addBinary(string& s1, string& s2) {
        // your code here
        unsigned long long n1=bitset<32>(s1).to_ullong();
        unsigned long long n2=bitset<32>(s2).to_ullong();
        
        unsigned long long sum=n1+n2;
        string binarysum=bitset<32>(sum).to_string();
        
        size_t res = binarysum.find('1');
        return binarysum.substr(res);
    }
};
int main(){
   string a,b;
   cin>>a>>b;
   Solution ob;
   cout<<ob.addBinary(a,b);
   cout<<endl;
}
*/
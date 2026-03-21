// Given a string s, the objective is to convert it into integer format without utilizing any built-in functions. Refer the below steps to know about atoi() function.

// Cases for atoi() conversion:
// Skip any leading whitespaces.
// Check for a sign (‘+’ or ‘-‘), default to positive if no sign is present.
// Read the integer by ignoring leading zeros until a non-digit character is encountered or end of the string is reached. If no digits are present, return 0.
// If the integer is greater than 231 – 1, then return 231 – 1 and if the integer is smaller than -231, then return -231.

#include <iostream>
using namespace std;
#include <limits.h>
class Solution
{
public:
    int myAtoi(char *s)
    {
        // Your code here

        int sign = 1, result = 0, i = 0;

        while (s[i] == ' ')
        {
            i++;
        }
        if (s[i] == '-')
            sign = -1;
        i++;

        for (; s[i] >= '0' && s[i] <= '9'; i++)
        {

            result = (10 * result) + (s[i] - '0');
            if (result * sign >= INT_MAX)
                return INT_MAX;
            if (result * sign <= INT_MIN)
                return INT_MIN;
            /*if(result>INT_MAX){
                if(sign==1)
                return INT_MAX;
                else
                return INT_MIN;
            }*/
        }
        return result * sign;
    }
};
int main()
{

    {
        char s[20];
        cin >> s;
        Solution ob;
        cout << ob.myAtoi(s) << endl;
    }
}

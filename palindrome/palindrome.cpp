#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x);
};

string reverseStr(string s, int midpoint) {         // reverses a string given 124, returns 421
  string reverseS;
  for (int i=s.size(); i >= midpoint; i--) {
        reverseS += s[i];
  }
  return reverseS;
}

bool Solution::isPalindrome(int x) {
    string s = to_string(x);      // convert to string to make comparing the two following substring easier
    int midpoint = s.size() / 2;  // the midpoint is index in s
    string sub1;                  // declare variables in this larger scope
    string sub2;
    string revS;
    if (s.size() % 2 == 0) {                            // 2 cases of palindrome: even or odd len of string
      sub1 = s.substr(0, midpoint);                     // given: 1221 sub1 is "12"
      sub2 = s.substr(midpoint, s.size());              // given: 1221 sub2 is "21"
      revS = reverseStr(s, midpoint);                   // call reverseString function
    }
    if (s.size() % 2 != 0) { // 21512
      sub1 = s.substr(0, midpoint);
      sub2 = s.substr(midpoint + 1, s.size());          // ignore the median int in string
      revS = reverseStr(s, midpoint + 1);               // do the same when passing parameter to function
    }
    if (sub1 == revS) {                                 // if two substrings are equal, return true
      return true;
    }
    return false;
}

int main() {
    Solution s;
    cout << s.isPalindrome(12521) << endl;
    return 0;
}

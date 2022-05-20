#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x);
};

bool Solution::isPalindrome(int x) {
    // int (x) to string (s)
    // len(s) % 2 == 0
    // len(s) % 2 != 0
    string s = to_string(x);
    // cout << (s.size()/2) << endl;
    int midpoint = s.size() / 2;
    cout << midpoint << endl;
    string sub1;
    string sub2;
    string rev;
    if (s.size() % 2 == 0) {
      sub1 = s.substr(0, midpoint);
      sub2 = s.substr(midpoint, s.size());
      cout << sub1 << endl;
      cout << sub2 << endl;
      for (int i=s.size() - 1; i >= midpoint; i--) {
        rev += s[i];
      }
    }
    if (s.size() % 2 != 0) { // 21512
      sub1 = s.substr(0, midpoint);
      sub2 = s.substr(midpoint + 1, s.size());
      cout << sub1 << endl;
      cout << sub2 << endl;
      for (int i=s.size() - 1; i >= midpoint + 1; i--) {
        rev += s[i];
      }
    }
    cout << rev << endl;
    if (sub1 == rev) {
      return true;
    }
    return false;
}
/*
int main() {
    Solution s;
    cout << s.isPalindrome(12521) << endl;
    return 0;
}
*/
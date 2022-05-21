#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


// steps to solution
// assume: vector sorted from shortest to longest
// case 1: same word three times
// case 2: subset of word three times
// case 3: no same words or subsets three times

class Solution {
  public:
    string longestCommonPrefix(vector<string>& strs);
};

bool compareFn(string a, string b) { // create custom sort
    if (a.size() <= b.size()) {
      return true;
    }
    return false;
}

string Solution::longestCommonPrefix(vector<string>& strs) {
    string shortestWord = strs[0];
    int i = 0; // the index to make substrings
    int j = shortestWord.size();
    cout << "shortest word is " << shortestWord << endl;
    string wordToMatch = shortestWord.substr(i, j);
    cout << "substr is " << wordToMatch << endl;
    bool isMatch = false;
    for (int i=1; i < strs.size(); i++) {
      cout << strs[i] << endl;
      if (wordToMatch != strs[i]) {
        cout << "not a match: break" << endl;
      }
    }
    return "hello world";
}

int main() {
  Solution s;
  vector<string> v = { "flower","flow","flight" };
  /*
  for (string e: v) {
    cout << e << endl;
  }
  */
  sort(v.begin(), v.end(), compareFn); // sorting, but not by length
  /*
  for (string e: v) {
    cout << e << endl;
  }
  */
  s.longestCommonPrefix(v);
  return 0;
}
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
  public:
    string longestCommonPrefix(vector<string>& strs);
};

bool compareFn(string a, string b) { // a compare function for sort method
  if (a.size() <= b.size()) {        // compare the size() of each string
    return true;
  }
  return false;
}

vector<string> getAllSubStrings(string smallestWord) {
  string s = smallestWord;            // the shortest word, hard coded here
  vector <string> words;              // a list to hold the split substrings
  words.push_back(s);                 // the full word is treated as exception
  
  int i = 0;                          // manipulate the i and j index
  int j = s.size();                   // to create substrigs
  
  /*
  string sub = s.substr(i, j);        // cout to console to test substr is
  cout << sub << endl;                // working properly
  */
  
  
  while (j > 1) {                     //
    
    j -= 1;
    
    for (i; i + j <= s.size(); i++) {
      string sub = s.substr(i, j);
      // cout << sub << endl;
      words.push_back(sub);
    }
    i = 0;
  }
  /*
  for (string w: words) {
    cout << w << endl;
  }
  */
  return words;
}

string commonPrefix(vector<string> v, vector<string> subV) {
  // string prefix = subV[0];
  // cout << "prefix: " << prefix;
  bool flag = true;
  for (string p: subV) {
    // cout << "p: " << p << endl;
    for (string w: v) {
      // cout << "w: " << w << endl;
      if (w.rfind(p, 0) == -1) {
        flag = false;
      }
    }
    if (flag == true) {
      // cout << "answer is: " << p << endl;
      return p;
    }
    flag = true;
  }
  return "";
}

string Solution::longestCommonPrefix(vector<string>& strs) {
  sort(strs.begin(), strs.end(), compareFn);    // sort by length of word
  vector<string> subWords = getAllSubStrings(strs[0]);
  string s = commonPrefix(strs, subWords);
  return s;
}
int main() {
  Solution sol;                                         // create class in scope
  vector<string> strs = { "flower","flow","flight" };   // sorted test strings
  cout << sol.longestCommonPrefix(strs) << endl;
}
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// find all combinations of string
int main() {
  string s = "flow";                  // the shortest word, hard coded here
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
  
  for (string w: words) {
    cout << w << endl;
  }
  
  return 0;
}
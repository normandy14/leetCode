#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s);
};

// Stratrgy to Solve:
// iterate over string backwords
// check if whitespace using while loop
// when hit first English letter, start count
// when hit first space, return count

// ex string: "hello over there"

int Solution::lengthOfLastWord(string s) {
  int lengthOfWord;                         // the length of the word to be returned
  if (s[s.size() - 1] == ' ') {             // is last char an empty-space?
    int i = s.size() - 1;                   // if so: create loop that removes whitespaces, until none left
    while (s[i] == ' ') {
      i -= 1;                               // keep an index
    }
    s = s.substr(0, i + 1);                 // truncate the strings and whitespaces using substr()
  }
  for (int i=s.size() - 1; i >= 0; i--) {   // loop backwards because only concerned with end of string
    if (s[i] == ' ') {                      // stop, we reached end of this word
      return lengthOfWord;
    }
    lengthOfWord += 1;                      // increment everytime an English char is encountered in loop
  }
  return 0;
}

int main() {
  Solution s;
  int len;
  len = s.lengthOfLastWord("Hello World");
  cout << len << endl;
  len = s.lengthOfLastWord("   fly me   to   the moon  ");
  cout << len << endl;
  len = s.lengthOfLastWord("luffy is still joyboy");
  cout << len << endl;
  return 0;
}